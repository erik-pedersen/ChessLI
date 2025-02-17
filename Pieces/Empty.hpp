#ifndef EMPTY_HPP
#define EMPTY_HPP
#include "Piece.hpp"

class Empty : public Piece {
	private:
		char team;
		char name;

	public:
		Empty();
		~Empty();
		bool canMove(Position from, Position to, std::vector<std::vector<Piece *>> board) const override;
		char print() const override;
		char getTeam() const override;
		char getName() const override;
};

#endif
