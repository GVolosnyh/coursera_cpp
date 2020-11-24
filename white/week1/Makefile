CC ?= gcc
CXX ?= g++

C_SOURCES      += 

CPP_SOURCES    +=

CPPTOC_SOURCES += 


CPP_OBJECTS    = $(CPP_SOURCES:.cpp=.o)
CPPTOC_OBJECTS = $(CPPTOC_SOURCES:.cpp=.o)
C_OBJECTS      = $(C_SOURCES:.c=.o)

CFLAGS      = -c -Wall -Wextra -O0 -ggdb
CPPFLAGS    = -c -Wall -Wextra -O0 -ggdb -std=c++14
LDFLAGS     = -ggdb
LIBS        = 
CPP_DEFS    = 
INCLUDES    = 

.PHONY: gcd.exe

all: gcd.exe

gcd.exe: gcd.o
	$(CXX) $(LDFLAGS) -o $@ $+ $(LIBS)

%.o: %.cpp
	$(CXX) $(CPPFLAGS) $(INCLUDES) $(CPP_DEFS) -o $@ $<

%.o: %.c
	$(CC) $(CFLAGS) $(C_DEFS) $(INCLUDES) -o $@ $<

clean:
	rm -f $(CPP_OBJECTS) $(CPPTOC_OBJECTS) $(C_OBJECTS) *.o *.exe
