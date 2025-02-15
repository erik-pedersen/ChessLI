#include <iostream>
#include "Pawn.hpp"

Pawn::Pawn(char newTeam) : team {newTeam} {}

Pawn::~Pawn() {}

bool Pawn::canMove(Position from, Position to) const {
	if (to.row == from.row + 1) {
		return true;
	}

	return false;
}

char Pawn::print() const {
	return 'P';
}

char Pawn::getTeam() const {
	return team;
}
