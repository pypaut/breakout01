CC = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -Isrc/includes
OBJS = src/main.cc
BIN = breakout
TRASH = $(BIN)

.PHONY: all clean

all: $(BIN)

$(BIN):
	$(CC) $(CXXFLAGS) $(OBJS) -o $(BIN)

clean:
	$(RM) $(TRASH)
