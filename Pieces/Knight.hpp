#ifndef KNIGHT_HPP
#define KNIGHT_HPP
#include "Piece.hpp"

class Knight : public Piece {
	private:
		char team;
		char name;

	public:
		Knight(char newTeam);
		~Knight();
		bool canMove(Position from, Position to, 
				std::vector<std::vector<Piece *>> board) const override;
		char print() const override;
		char getTeam() const override;
		char getName() const override;
};

#endif
