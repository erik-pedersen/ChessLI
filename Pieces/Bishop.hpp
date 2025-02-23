#ifndef BISHOP_HPP
#define BISHOP_HPP
#include "Piece.hpp"

class Bishop : public Piece {
	private:
		char team;
		char name;

	public:
		Bishop(char newTeam);
		~Bishop();
		bool canMove(Position from, Position to, 
				std::vector<std::vector<Piece *>> board) const override;
		char print() const override;
		char getTeam() const override;
		char getName() const override;
};

#endif
