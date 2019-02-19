CC = g++
CXXFLAGS =  -Wall -Werror -Wextra -pedantic -std=c++17 -Isrc/includes
LIBS = -lSDL2
OBJS =\
	src/main.cc\
  src/update.cc\
  src/draw.cc\
  src/event.cc
BIN = breakout
TRASH = $(BIN)

.PHONY: all clean

all: $(BIN)

$(BIN):
	$(CC) $(CXXFLAGS) $(OBJS) -o $(BIN) $(LIBS)

clean:
	$(RM) $(TRASH)
