default: main.cpp Board/Board.o Pieces/Pieces.o
	g++ main.cpp Board/Board.o Pieces/Pawn.o Pieces/Empty.o -o main

Board/Board.o: Board/Board.cpp
	g++ -c Board/Board.cpp -o Board/Board.o

Pieces/Pieces.o: Pieces/Pawn.cpp Pieces/Empty.cpp
	g++ -c Pieces/Pawn.cpp -o Pieces/Pawn.o
	g++ -c Pieces/Empty.cpp -o Pieces/Empty.o
