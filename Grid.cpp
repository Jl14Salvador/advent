#include "Grid.h"

Grid::Grid(int x, int y) {
	row = y; 
	col = y; 
}

int Grid::getRow() {
	return row; 
}

int Grid::getCol() {
	return col; 
}

