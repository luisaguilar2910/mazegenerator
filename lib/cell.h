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

Cell::Cell(){
	this->north = NULL;
	this->south = NULL;
	this->east = NULL;
	this->west = NULL;
}

Cell::Cell(int row,int col){
	this->row=row;
	this->col=col;
	this->north = NULL;
	this->south = NULL;
	this->east = NULL;
	this->west = NULL;
}

void Cell::set(int row,int col){
	this->row=row;
	this->col=col;
}

void Cell::link(Cell* cell, bool bidi){
	this->links.insert(pair <Cell*,bool> (cell,true));
	if(bidi)
		cell->link(this,false);
}

void Cell::unlink(Cell* cell, bool bidi){
	this->links.erase(cell);
	if(bidi)
		cell->unlink(this,false);
}

bool Cell::isLinked(Cell* cell){
	this->itr = this->links.find(cell);
	return this->itr!=this->links.end();
}

vector<Cell*> Cell::getNeighbors(){
	vector<Cell*> neighbors;
	if (this->north!=NULL)
		neighbors.push_back(this->north);
	if (this->south!=NULL)
		neighbors.push_back(this->south);
	if (this->east!=NULL)
		neighbors.push_back(this->east);
	if (this->west!=NULL)
		neighbors.push_back(this->west);
	return neighbors;
}
