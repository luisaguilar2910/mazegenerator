#include <iostream>
#include <vector>
#include <map>
#include <iterator>
using namespace std;

class Cell{
	private:
		int row;
		int col;
		map <Cell*,bool> links;
		map <Cell*,bool>::iterator itr;
	public:
		Cell* north;
		Cell* south;
		Cell* east;
		Cell* west;
		Cell();
		Cell(int,int);
		void link(Cell* cell, bool bidi);
		void unlink(Cell* cell, bool bidi);
		int getRow(){return this->row;};
		void setRow(int row) {this->row = row;};
		void setCol(int col) {this->col = col;};
		void set(int row,int col);
		vector<Cell*> getNeighbors();
		bool isLinked(Cell* cell);
};
