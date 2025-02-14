#ifndef BOARD_HPP
#define BOARD_HPP
#include <vector>
#include <string>
#include "../Pieces/Piece.hpp"
#include "../Pieces/Pawn.hpp"
#include "../Pieces/Empty.hpp"

class Board {
	private: 
		std::vector<std::vector<Piece *>> board;

	public:
		Board();
		void move(Position from, Position to);
		void createPawn(Position p, char team); // Replace with piece factory
		void show();
};

#endif
