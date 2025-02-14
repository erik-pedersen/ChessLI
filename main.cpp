#include <iostream>
#include "Board/Board.hpp"
#include "Pieces/Piece.hpp"
#include "Pieces/Empty.hpp"
#include "Pieces/Pawn.hpp"

int main() {

	Board b;
	b.show();
	b.createPawn(Position{1,0}, 'B');
	b.createPawn(Position{1,1}, 'B');
	b.createPawn(Position{1,2}, 'B');
	b.createPawn(Position{1,3}, 'B');
	b.createPawn(Position{1,4}, 'B');
	b.createPawn(Position{1,5}, 'B');
	b.createPawn(Position{1,6}, 'B');
	b.createPawn(Position{1,7}, 'B');
	b.createPawn(Position{6,0}, 'W');
	b.createPawn(Position{6,1}, 'W');
	b.createPawn(Position{6,2}, 'W');
	b.createPawn(Position{6,3}, 'W');
	b.createPawn(Position{6,4}, 'W');
	b.createPawn(Position{6,5}, 'W');
	b.createPawn(Position{6,6}, 'W');
	b.createPawn(Position{6,7}, 'W');
	b.show();
	b.move(Position{1,4}, Position{2,4});
	b.show();
	b.move(Position{6,3}, Position{5,3});
	b.show();
	b.move(Position{4,4}, Position{4,4});
	b.show();

	std::cout << "Success!\n";

	return 0;
}
