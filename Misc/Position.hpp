#ifndef POSITION_HPP
#define POSITION_HPP

struct Position {
	int row;
	int col;

	bool operator==(Position p) {
		if (row == p.row && col == p.col) {
			return true;
		} else {
			return false;
		}
	}

	bool operator!=(Position p) {
		if (row == p.row && col == p.col) {
			return false;
		} else {
			return true;
		}
	}

};
#endif
