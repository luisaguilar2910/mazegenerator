#include <iostream>
using namespace std;
#include <stdlib.h>

#include "lib/cell.h"
#include "lib/grid.h"
#include "lib/gridprocessor.h"

int main(int argc,char** argv){
	srand(time(0));
	int rows = atoi(argv[1]);
	int cols = atoi(argv[2]);

	Grid* grid = new Grid(rows,cols);

	double time = GridProcessor::process(grid,0);
	grid->printGrid();
	cout<<"Generation time: "<<time<<" s"<<endl;
	return 0;
}
