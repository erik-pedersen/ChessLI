#ifndef PAWN_HPP
#define PAWN_HPP
#include "Piece.hpp"

class Pawn : public Piece {
	private:
		char team;

	public:
		Pawn(char newTeam);
		~Pawn();
		bool canMove(Position from, Position to) const override;
		char print() const override;
		char getTeam() const override;
};

#endif
