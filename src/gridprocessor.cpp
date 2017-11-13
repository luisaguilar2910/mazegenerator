#include "../lib/gridprocessor.h"

void GridProcessor::process(Grid* grid,int kind){
	switch(kind){
		case 0:
			cout<<"Type 0"<<endl;
		break;
		default:
			cout<<"BAD PROCESS!"<<endl;
		break;
	};
	grid->printGrid();
}
