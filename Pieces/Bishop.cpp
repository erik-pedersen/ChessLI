#include <iostream>
#include "Bishop.hpp"

Bishop::Bishop(char newTeam) : team {newTeam}, name {'B'} {}

Bishop::~Bishop() {}

bool Bishop::canMove(Position from, Position to, std::vector<std::vector<Piece *>> board) const {

	// TODO: Include logic for blocking
	if (from.row - to.row == from.col - to.col || from.row - to.row == to.col - from.col) {
		if (team == 'W') {
			if (board[to.row][to.col]->getTeam() == 'W') {
				return false;
			} else {
				return true;
			}
		}

		if (team == 'B') {
			if (board[to.row][to.col]->getTeam() == 'B') {
				return false;
			} else {
				return true;
			}
		}
	}

	return false;
}

char Bishop::print() const {
	return name;
}

char Bishop::getTeam() const {
	return team;
}

char Bishop::getName() const {
	return name;
}
