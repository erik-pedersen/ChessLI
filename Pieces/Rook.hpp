#ifndef ROOK_HPP
#define ROOK_HPP
#include "Piece.hpp"

class Rook : public Piece {
	private:
		char team;
		char name;

	public:
		Rook(char newTeam);
		~Rook();
		bool canMove(Position from, Position to, 
				std::vector<std::vector<Piece *>> board) const override;
		char print() const override;
		char getTeam() const override;
		char getName() const override;
};

#endif
