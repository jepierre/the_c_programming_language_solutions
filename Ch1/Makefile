# the compiler: gcc for c programs, g++ for C++
ifeq ($(OS), Windows_NT) 
  #run vcvars32.bat on the command line first
  CC = cl
  # compiler flags
  CFLAGS = -D WIN32
  #make clean command
  CLEANCC = del *.exe *.obj
else
  CC = gcc
  # compiler flags:
  CFLAGS = -Wall -g
  #make clean command
  CLEANCC = rm -f $(PROGS)
endif

# build all target executable:
SRCS = $(wildcard *.c)


# $(patsubst PATTERN,REPLACEMENT,TEXT)
# patsubst finds white-space-seperated words in TEXT that match PATTERN and replaces them with REPLACEMENT
# % acts as a wildcard matching any characters within a word
PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

# $@ is the name of the file being generated
# $< is first prerequisite, may also be the source file
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

# phony just tells Make that this clean is not associated with any files name clean
.PHONY: clean

clean:
	$(CLEANCC)
