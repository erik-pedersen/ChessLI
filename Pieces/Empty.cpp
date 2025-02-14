#include "Empty.hpp"

Empty::Empty() {
	team = 'E';
}

Empty::~Empty() {}

bool Empty::canMove(Position from, Position to) const {
	return false;
}

char Empty::print() const {
	return '.';
}

char Empty::getTeam() const {
	return team;
}
