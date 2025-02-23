#include <iostream>
#include "Rook.hpp"

Rook::Rook(char newTeam) : team {newTeam}, name {'R'} {}

Rook::~Rook() {}

bool Rook::canMove(Position from, Position to, std::vector<std::vector<Piece *>> board) const {

	// TODO: Include logic for blocking
	if (from.row == to.row || from.col == to.col) {
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

char Rook::print() const {
	return name;
}

char Rook::getTeam() const {
	return team;
}

char Rook::getName() const {
	return name;
}
