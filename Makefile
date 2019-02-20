CC = g++
CXXFLAGS =  -Wall -Werror -Wextra -pedantic -std=c++17 -Isrc/includes
LIBS = -lSDL2
OBJS =\
	src/main.cc
BIN = breakout
TRASH = $(BIN)

.PHONY: all clean

all: $(BIN)

$(BIN):
	$(CC) $(CXXFLAGS) $(OBJS) -o $(BIN) $(LIBS)

clean:
	$(RM) $(TRASH)
