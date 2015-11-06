#ifndef GRID_H
#define GRID_H

class Grid{
public:
	Grid(int x, int y);
	~Grid();
	int getRow();
	int getCol(); 

private: 
	//vector of environments?
	int row;
	int col; 
};

#endif

