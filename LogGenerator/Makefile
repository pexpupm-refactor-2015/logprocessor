SRC=$(wildcard src/*.cpp src/*.cc)
BIN_FILE=LogGenerator
CC=g++
CCFLAGS=-std=c++11
INCLUDE_FILES=
LIBS=rabbitmq

all: $(SRC)
	$(CC) $(CCFLAGS) $(SRC) -l$(LIBS) -o $(BIN_FILE)

clean:
	rm -rf *~ $(BIN_FILE)
