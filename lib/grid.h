#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <string>
using namespace std;

#include "../lib/cell.h"

#ifndef GRID_LIB
#define GRID_LIB
class Grid{
	private:
		int rows;
		int cols;
		void prepareGrid();
		void configureCells();
		Cell** grid;
	public:
		Grid(int rows,int cols);
		int getRows(){return this->rows;};
		int getCols(){return this->cols;};
		int getSize(){return this->rows * this->cols;};
		Cell** getGrid(){return this->grid;};
		void printGrid();
};
#endif
