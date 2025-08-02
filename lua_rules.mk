# party files are run through trainerproc, which is a tool that converts party data to an output file
# matching the current trainer .h formatting

AUTO_GEN_TARGETS += src/luaproc/lua_script.lua

%.lua: %.h
	$(CPP) $(CPPFLAGS) -traditional-cpp - < $< | $(LUAPROC) -o $@ -i $< -
