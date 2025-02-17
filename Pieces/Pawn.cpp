#include <iostream>
#include "Pawn.hpp"

Pawn::Pawn(char newTeam) : team {newTeam}, name {'P'} {}

Pawn::~Pawn() {}

bool Pawn::canMove(Position from, Position to, std::vector<std::vector<Piece *>> board) const {
	if (team == 'W') {
		// Move forward once
		if (to.row == from.row + 1 
				&& to.col == from.col
				&& board[to.row][to.col]->getName() == '.') {
			return true;
		}

		// Capture enemy piece
		if ((to.row == from.row + 1) 
				&& ((to.col == from.col + 1) || (to.col == from.col - 1)) 
				&& board[to.row][to.col]->getName() != '.' 
				&& board[to.row][to.col]->getTeam() == 'B') {
			return true;
		}
	}

	if (team == 'B') {
		// Move forward once
		if (to.row == from.row - 1 
				&& to.col == from.col) {
			return true;
		}

		// Capture enemy piece
		if ((to.row == from.row - 1) 
				&& ((to.col == from.col + 1) || (to.col == from.col - 1)) 
				&& board[to.row][to.col]->getName() != '.' 
				&& board[to.row][to.col]->getTeam() == 'W') {
			return true;
		}
	}

	return false;
}

char Pawn::print() const {
	return 'P';
}

char Pawn::getTeam() const {
	return team;
}

char Pawn::getName() const {
	return name;
}
