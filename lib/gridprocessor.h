#include <iostream>
using namespace std;

class GridProcessor{
	public:
		static void process(Grid* grid,int kind);
};

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

