#include "Board.hpp"
#include <iostream>

Board::Board() {
	for (size_t i {0}; i < 8; i++) {
		board.push_back(std::vector<Piece *>());
	}

	for (size_t i {0}; i < 8; i++) {
		for (size_t j {0}; j < 8; j++) {
			board[i].push_back(new Empty());
		}
	}
}

void Board::move(Position from, Position to) {
	if (board[from.row][from.col]->canMove(from, to)) {
		std::cout << "Moved piece on (" << from.row << ", " << from.col << ") to (" << to.row << ", " << to.col << ")\n";
		delete board[to.row][to.col];
		board[to.row][to.col] = board[from.row][from.col];
		board[from.row][from.col] = new Empty();
	} else {
		std::cout << "Cannot move piece on (" << from.row << ", " << from.col << ") to (" << to.row << ", " << to.col << ")\n";
	}
}

// Replace with piece factory
void Board::createPawn(Position p, char team) {
	board[p.row][p.col] = new Pawn(team);
}

void Board::show() {
	for (auto v : board) {
		for (auto p : v) {
			if (p->getTeam() == 'W') {
				std::cout << "\x1b[36m";
				std::cout << p->print();
				std::cout << "\x1b[0m";
			} else if (p->getTeam() == 'B') {
				std::cout << "\x1b[31m";
				std::cout << p->print();
				std::cout << "\x1b[0m";
			} else {
				std::cout << p->print();
			}
		}
		std::cout << '\n';
	}
}
