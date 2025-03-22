#include <iostream>
#include "Bishop.hpp"

static bool pathNotBlocked(Position from, Position to, std::vector<std::vector<Piece *>> board);

Bishop::Bishop(char newTeam) : team {newTeam}, name {'B'} {}

Bishop::~Bishop() {}

bool Bishop::canMove(Position from, Position to, std::vector<std::vector<Piece *>> board) const {

	// TODO: Include logic for blocking
	if ((from.row - to.row == from.col - to.col || from.row - to.row == to.col - from.col)
        && pathNotBlocked(from, to, board)) {
        return (board[to.row][to.col]->getTeam() != team);
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

static bool pathNotBlocked(Position from, Position to, std::vector<std::vector<Piece *>> board) {
    return true; // TODO: remove this line

    if (to.row < from.row && to.col > from.col) { // Moving up and right
        while (to.row++ < from.row && to.col-- > from.col) {
            if (board[to.row][to.col]->getTeam() != 'E') return false;
        }
    }

    if (to.row < from.row && to.col < from.col) { // Moving up and left
        while (to.row++ < from.row && to.col++ < from.col) {
            if (board[to.row][to.col]->getTeam() != 'E') return false;
        }
    }

    if (to.row > from.row && to.col > from.col) { // Moving down and right
        while (to.row-- > from.row && to.col-- > from.col) {
            if (board[to.row][to.col]->getTeam() != 'E') return false;
        }
    }

    if (to.row > from.row && to.col < from.col) { // Moving down and left
        while (to.row-- > from.row && to.col++ < from.col) {
            if (board[to.row][to.col]->getTeam() != 'E') return false;
        }
    }

    return true;
}
