CC = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -Isrc/includes
OBJS =\
	src/draw.cc\
	src/event.cc\
	src/main.cc\
	src/update.cc

BIN = breakout
TRASH = $(BIN)

.PHONY: all clean

all: $(BIN)

$(BIN):
	$(CC) $(CXXFLAGS) $(OBJS) -o $(BIN)

clean:
	$(RM) $(TRASH)
