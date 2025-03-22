#include <iostream>
#include "Knight.hpp"

Knight::Knight(char newTeam) : team {newTeam}, name {'K'} {}

Knight::~Knight() {}

bool Knight::canMove(Position from, Position to, std::vector<std::vector<Piece *>> board) const {

	if ((std::abs(from.row - to.row) + std::abs(from.col - to.col) == 3) 
        && (std::abs(from.row - to.row) > 0)
        && (std::abs(from.col - to.col) > 0)) {
        return !(team == board[to.row][to.col]->getTeam());
	}

	return false;
}

char Knight::print() const {
	return name;
}

char Knight::getTeam() const {
	return team;
}

char Knight::getName() const {
	return name;
}
