#include <iostream>
#include "Board/Board.hpp"
#include "Misc/Position.hpp"
#include "Pieces/Piece.hpp"
#include "Pieces/Empty.hpp"
#include "Pieces/Pawn.hpp"

// static void waitForInput();
static Position getUserSelection();
static Position getUserMove();

int main() {

	Board b;

	for (int i {0}; i < 8; i++) {
		b.createPawn(Position{6, i}, 'B');
		b.createPawn(Position{1, i}, 'W');
	}

	b.createRook(Position{0, 0}, 'W');
	b.createRook(Position{0, 7}, 'W');
	b.createRook(Position{7, 0}, 'B');
	b.createRook(Position{7, 7}, 'B');
	b.createBishop(Position{0, 2}, 'W');
	b.createBishop(Position{0, 5}, 'W');
	b.createBishop(Position{7, 2}, 'B');
	b.createBishop(Position{7, 5}, 'B');
	b.createKnight(Position{0, 1}, 'W');
	b.createKnight(Position{0, 6}, 'W');
	b.createKnight(Position{7, 1}, 'B');
	b.createKnight(Position{7, 6}, 'B');

	// This logic could be made a lot more elegant - handle inputs without relying on 
	// arbitrary 'Position' outputs
	while (true) {
		b.show();
		Position userPos = Position{-1, -1};
		do {
			userPos = getUserSelection();
		} while (userPos == Position{-1, -1});
		b.select(userPos);

		b.show();
		Position userMov = Position{-1, -1};
		userMov = getUserMove();

		if (userMov != Position{-1, -1}) {
			b.move(userPos, userMov);
		}

		b.select(Position{-1, -1});
	}
	

	/* b.select(Position{6, 4});
	b.show();
	waitForInput();

	b.select(Position{1, 4});
	b.show();
	waitForInput();
	*/

	// Select a piece, the piece will change colour
	// e.g: b.select(Position{4,4});
	// Select a location, the piece will attempt to move to that location
	// e.g: b.move(Position{4,4}, Position{5,4});

	std::cout << "\nSuccess! End.\n";

	return 0;
}

static Position getUserSelection() {
	std::cout << "Select a piece (e.g e4): ";
	char input;
	int row;
	int col;

	std::cin >> input;
	input = std::tolower(input);
	col = input - 'a';
	std::cin >> input;
	row = input - '1';

	if (row >= 0 && row < 8 && col >= 0 && col < 8) {
		return Position{row, col};
	} else {
		return Position{-1, -1};
	}
}

static Position getUserMove() {
	std::cout << "Select a position (e.g e4), or type 'x' to unselect: ";
	char input;
	int row;
	int col;

	std::cin >> input;
	if (input == 'x') {
		return Position{-1, -1};
	}

	input = std::tolower(input);
	col = input - 'a';
	std::cin >> input;
	if (input == 'x') {
		return Position{-1, -1};
	}

	row = input - '1';

	if (row >= 0 && row < 8 && col >= 0 && col < 8) {
		return Position{row, col};
	} else {
		return Position{-1, -1};
	}
}

/* static void waitForInput() {
	char input;
	std::cout << "Enter 'c' to continue: ";
	do {
		std::cin >> input;
	} while (input != 'c');
} */
