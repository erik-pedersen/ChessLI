#include <iostream>
#include "Knight.hpp"

static int abs(int x);


Knight::Knight(char newTeam) : team {newTeam}, name {'K'} {}

Knight::~Knight() {}

bool Knight::canMove(Position from, Position to, std::vector<std::vector<Piece *>> board) const {

	if (abs(from.row - to.row) + abs(from.col - to.col) == 3) {
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

char Knight::print() const {
	return name;
}

char Knight::getTeam() const {
	return team;
}

char Knight::getName() const {
	return name;
}

static int abs(int x) {
	if (x > 0) {
		return x;
	}

	return -x;
}
