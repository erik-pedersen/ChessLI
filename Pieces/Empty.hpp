#ifndef EMPTY_HPP
#define EMPTY_HPP
#include "Piece.hpp"

class Empty : public Piece {
	private:
		char team;

	public:
		Empty();
		~Empty();
		bool canMove(Position from, Position to) const override;
		char print() const override;
		char getTeam() const override;
};

#endif
