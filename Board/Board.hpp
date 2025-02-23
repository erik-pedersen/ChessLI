#ifndef BOARD_HPP
#define BOARD_HPP
#include <vector>
#include <string>
#include "../Pieces/Piece.hpp"
#include "../Pieces/Pawn.hpp"
#include "../Pieces/Bishop.hpp"
#include "../Pieces/Rook.hpp"
#include "../Pieces/Knight.hpp"
#include "../Pieces/Empty.hpp"

class Board {
	private: 
		std::vector<std::vector<Piece *>> board;
		Position position;

	public:
		Board();
		void move(Position from, Position to);
		void createPawn(Position p, char team); // Replace with piece factory?
		void createRook(Position p, char team); // Replace with piece factory?
		void createBishop(Position p, char team); 
		void createKnight(Position p, char team); 
		void select(Position p);
		void show();
		std::vector<std::vector<Piece *>> getBoard();
};

#endif
