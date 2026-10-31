# For instructions on how to run this file, just run it :)

try:
    import github
except:
    print("github module missing. Please install it using the following command:")
    print("pip install PyGithub")
    quit()

import re

###### TO DO LIST
## cleanup/followup indication

try:
    with open("auth.txt", "r") as file:
        authtoken = file.read()
except:
    print("auth.txt is missing. This file is necessary to authenticate yourself to GitHub.")
    print("Please add an auth.txt file to the root folder (it is already in .gitignore) and add your personal token without newlines.")
    quit()

try:
    with open("input.md", "r") as file:
        input_data = file.read()
except:
    print("input.md is missing. Please have GitHub generate an automatic changelog and paste it in this file in its entirety.")
    quit()

version_tag = input_data.split("...")[-1]

print("Connecting to GitHub…")
g = github.Github(auth=github.Auth.Token(authtoken))
repo = g.get_repo("rh-hideout/pokeemerald-expansion")
# function branch repos
pret_repo = g.get_repo("pret/pokeemerald")
merrp_repo = g.get_repo("aarant/pokeemerald")

pr_list = re.findall("https://github.com/rh-hideout/pokeemerald-expansion/pull/([0-9]+)", input_data)
pr_list = list(dict.fromkeys(pr_list))
prs = {}

class PRData:
    def __init__(self, title, author, body):
        self.author = author
        self.title = title
        self.body = body
        self.labels = []
        self.included = False
        self.bullets = []

for prno in pr_list:
    print("Fetching #%s (%s/%s)" % (prno, pr_list.index(prno) + 1, len(pr_list)))
    pr = repo.get_pull(int(prno))
    prs[prno] = PRData(pr.title, [pr.user.login], pr.body)
    for x in pr.labels:
        prs[prno].labels.append(x.name)
    # pull collaborators from body
    collab_body = re.findall(r"## \*\*People who collaborated with me in this PR\*\*((.|\n)*?\n)\n", str(pr.body.replace("\r", "")))
    if len(collab_body) > 0:
        for x in re.findall("@(.*)\n", collab_body[0][0]):
            prs[prno].author.append(x.strip())
    # pull bullet points from body
    bullet_body = re.findall(r"## Things to note in the release changelog((.|\n)*?)##", str(pr.body.replace("\r", "")))
    if len(bullet_body) > 0:
        for x in re.findall("\n( *.*)", bullet_body[0][0]):
            prs[prno].bullets.append("    " + x.strip())
        if len(prs[prno].bullets) == 0:
            # warn that something went wrong
            print("Warning: Unable to parse #%s's bullet data" % prno)

# do actual output
def FormatAuthors(authors):
    if len(authors) == 1:
        return "@" + authors[0]
    out = ""
    for x in authors[:-1]:
        if out != "":
            out += ", "
        out += "@" + x
    return out + " and @" + authors[-1]

def FormatPRData(pr, isrefactor):
    st = "* "
    if "migration script" in prs[pr].labels:
        st += "📜 "

    st += "%s by %s in [#%s](https://github.com/rh-hideout/pokeemerald-expansion/pull/%s)\n" % (prs[pr].title, FormatAuthors(prs[pr].author), pr, pr)

    for x in prs[pr].bullets:
        st += "%s\n" % x

    return st

def ParseCategory(labelNames, changelogOutput, addedChangedFixedSplit):
    catout = ""
    added = []
    changed = []
    fixed = []
    amrefactor = "type: refactor" in labelNames
    for pr in prs:
        #if prs[pr].included == True:
        #    continue
        qualify = False
        for lb in prs[pr].labels:
            if lb in labelNames:
                qualify = True
                break
        if qualify == False:
            continue
        else:
            if "bugfix" in prs[pr].labels or addedChangedFixedSplit == False:
                if amrefactor:
                    fixed.append(FormatPRData(pr, True))
                else:
                    fixed.append(FormatPRData(pr, False))
            elif "new-feature" in prs[pr].labels:
                added.append(FormatPRData(pr, False))
            else:
                changed.append(FormatPRData(pr, False))
            prs[pr].included = True

    if (len(added) + len(changed) + len(fixed)) > 0:
        catout += "## %s\n" % changelogOutput
        if amrefactor:
            catout += "📜 = Uses a migration script.\n"

    if addedChangedFixedSplit == False:
        catout += "".join(fixed) + "\n"
    else:
        if len(added) > 0:
            catout += "### Added\n" + "".join(added) + "\n"
        if len(changed) > 0:
            catout += "### Changed\n" + "".join(changed) + "\n"
        if len(fixed) > 0:
            catout += "### Fixed\n" + "".join(fixed) + "\n"

    return(catout)

out = "```md\n## How to update\n- If you haven't set up a remote, run the command `git remote add RHH https://github.com/rh-hideout/pokeemerald-expansion`.\n- Once you have your remote set up, run the command `git pull RHH %s`.\n```\n\n" % version_tag

out += ParseCategory(["type: refactor"], "🌋 *REFACTORS* 🌋", False)
out += ParseCategory(["General"], "🧬 General 🧬", True)
out += ParseCategory(["category: overworld"], "🗺️ Overworld 🗺️", True)
# out += ParseCategory("", "✨ Feature Branches ✨", True)
out += ParseCategory(["category: pokemon"], "🐉 Pokémon 🐉", True)
out += ParseCategory(["category: battle-mechanic"], "⚔️ Battle General ⚔️", True)
out += ParseCategory(["category: move effect", "category: move animation"], "🤹 Moves 🤹", True)
out += ParseCategory(["category: ability"], "🎭 Abilities 🎭", True)
out += ParseCategory(["category: items"], "🧶 Items 🧶", True)
out += ParseCategory(["category: battle-ai"], "🤖 Battle AI 🤖", True)
out += ParseCategory(["type: cleanup"], "🧹 Other Cleanup 🧹", False)
out += ParseCategory(["category: battle-tests"], "🧪 Test Runner 🧪", True)
out += ParseCategory(["type: documentation"], "📚 Documentation 📚", False)
out += ParseCategory(["category: sprite-issue"], "👻 Sprites 👻", True)

# branch synchronisation
def GrabPullsFromRemote(pr, reporef, tag, linkloc):
    subprlist = []
    for subpr in re.findall("%s#([0-9]*)" % tag, prs[pr].body):
        prdata = reporef.get_pull(int(subpr))
        subprlist.append("    * %s by @%s in [%s#%s](https://github.com/%s/pull/%s)\n" % (prdata.title, prdata.user.login, tag, subpr, linkloc, subpr))
    return ["%s in [#%s](https://github.com/rh-hideout/pokeemerald-expansion/pull/%s)" % (re.findall(r"\((.*)\)", prs[pr].title)[0], pr, pr), subprlist]

def ParseBranchSyncGroup(lst):
    lstout = ""
    for entry in lst:
        lstout += "* %s\n" % entry[0] + "".join(entry[1])
    return lstout

def ParseBranchSync():
    catout = ""
    # list of branches
    pret = []
    merrp_followers = []

    # actual code
    for pr in prs:
        if prs[pr].included == True:
            continue
        qualify = False
        for lb in prs[pr].labels:
            if lb in ["type: sync"]:
                qualify = True
                break
        if qualify == False:
            continue
        else:
            if "pret#" in prs[pr].body:
                pret.append(GrabPullsFromRemote(pr, pret_repo, "pret", "pret/pokeemerald"))
                prs[pr].included = True
            elif "aarant#" in prs[pr].body:
                merrp_followers.append(GrabPullsFromRemote(pr, merrp_repo, "aarant", "aarant/pokeemerald")) # add distinction between DNS/followers later
                prs[pr].included = True

    if (len(pret) + len(merrp_followers)) > 0:
        catout += "## 📦 Branch Synchronisation 📦\n"

    if len(pret) > 0:
        catout += "### pret\n"
        catout += ParseBranchSyncGroup(pret)

    if len(merrp_followers) > 0:
        catout += "### Followers\n"
        catout += ParseBranchSyncGroup(merrp_followers)

    if catout != "":
        catout += "\n"

    return catout

out += ParseBranchSync()

# 📦 Branch Synchronisation 📦

## Add back new contributors, full changelog etc
out += re.sub(r"## What's Changed(.|\n)*?\n\n", "", input_data)
out += "\n\n<!--Last PR: %s-->\n" % list(prs.keys())[-1]
out += "<!--Used to keep track of the last PR merged in case new ones come in before the changelog is done.-->\n"

## Fix new contributor links
out = re.sub(r"made their first contribution in (.*pull\/)([0-9]*)", "made their first contribution in [#\\2](\\1\\2)", out)

with open("output.md", "w") as file:
    file.write(out)
print("Printed to output.md!")

g.close()

# check which issues are left behind!
for x in prs:
    if prs[x].included == False:
        print("#%s “%s” could not be categorized!" % (x, prs[x].title))
        print(prs[x].labels)
