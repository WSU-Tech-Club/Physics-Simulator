SRC=Physics-Sim
CC=g++
LIB=SDL
INC=/usr/include/SDL

BIN=physics

all: physics

physics: main.o Vector.o Viewer.o
	g++ main.o Vector.o Viewer.o -l$(LIB) -I$(INC) -o $(BIN)

main.o:
	g++ -c $(SRC)/main.cpp -l$(LIB) -I$(INC) 

Vector.o:
	g++ -c $(SRC)/Vector.cpp -l$(LIB) -I$(INC) 

Viewer.o:
	g++ -c $(SRC)/Viewer.cpp -l$(LIB) -I$(INC) 

clean:
	@rm $(BIN) *.o
