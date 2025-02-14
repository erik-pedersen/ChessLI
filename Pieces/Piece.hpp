#ifndef PIECE_HPP
#define PIECE_HPP
#include "../Misc/Position.hpp"

class Piece {
	public:
		virtual bool canMove(Position from, Position to) const = 0;
		virtual char print() const = 0;
		virtual char getTeam() const = 0; // W for white, B for black, E for empty
};

#endif
