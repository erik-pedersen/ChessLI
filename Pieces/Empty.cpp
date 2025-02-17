#include "Empty.hpp"

Empty::Empty() : team {'E'}, name {'.'} {}

Empty::~Empty() {}

bool Empty::canMove(Position from, Position to, std::vector<std::vector<Piece *>> board) const {
	return false;
}

char Empty::print() const {
	return '.';
}

char Empty::getTeam() const {
	return team;
}

char Empty::getName() const {
	return name;
}
