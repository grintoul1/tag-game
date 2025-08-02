.PHONY: all clean

CFLAGS := -Wall -O2

SRCS := main.c

ifeq ($(OS),Windows_NT)
EXE := .exe
else
EXE :=
endif

all: luaproc$(EXE)
	@:

luaproc$(EXE): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $@ $(LDFLAGS)

clean:
	$(RM) luaproc$(EXE)
