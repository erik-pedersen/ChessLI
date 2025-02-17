#ifndef PAWN_HPP
#define PAWN_HPP
#include "Piece.hpp"

class Pawn : public Piece {
	private:
		char team;
		char name;

	public:
		Pawn(char newTeam);
		~Pawn();
		bool canMove(Position from, Position to, 
				std::vector<std::vector<Piece *>> board) const override;
		char print() const override;
		char getTeam() const override;
		char getName() const override;
};

#endif
