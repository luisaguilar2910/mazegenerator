#include "../lib/grid.h"

Grid::Grid(int rows, int cols){
	this->rows = rows;
	this->cols = cols;
	prepareGrid();
	configureCells();
}

void Grid::prepareGrid(){
	cout<<"prepareGrid"<<endl;
	grid = new Cell*[this->rows];
	for(int i=0;i<this->rows;i++){
		grid[i] = new Cell[this->cols];
	}
	cout<<"end"<<endl;
}

void Grid::configureCells(){
	cout<<"configureCells"<<endl;
	for(int i=0;i<this->rows;i++){
		for(int j=0;j<this->cols;j++){
			grid[i][j].set(i,j);
			if(i>0)
				grid[i][j].north = &grid[i-1][j];
			if(i<this->rows-1)
				grid[i][j].south = &grid[i+1][j];
			if(j>0)
				grid[i][j].west = &grid[i][j-1];
			if(j<this->cols-1)
				grid[i][j].east = &grid[i][j+1];
		}
	}
	cout<<"end"<<endl;
}

void Grid::printGrid(){
	string output = "+";
	for(int i=0;i<this->cols;i++){
		output += "---+";
	}
	output+="\n";

	for(int i=0;i<this->rows;i++){
		string top = "|";
		string bottom = "+";
		for(int j=0;j<this->cols;j++){
			string body = "   ";
			string east_boundary = grid[i][j].isLinked(grid[i][j].east)?" ":"|";
			top += (body + east_boundary);
			string south_boundary = grid[i][j].isLinked(grid[i][j].south)?"   ":"---";
			string corner = "+";
			bottom += (south_boundary + corner);
		}
		output += (top + "\n");
		output += (bottom + "\n");
	}
	cout<<output<<endl;
}
