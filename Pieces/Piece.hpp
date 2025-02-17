#ifndef PIECE_HPP
#define PIECE_HPP
#include <vector>
#include "../Misc/Position.hpp"

class Piece {
	public:
		virtual bool canMove(Position from, Position to, 
				std::vector<std::vector<Piece *>> board) const = 0;
		virtual char print() const = 0;
		virtual char getName() const = 0; // P for Pawn, . for Empty, etc.
		virtual char getTeam() const = 0; // W for white, B for black, E for empty
};

#endif
