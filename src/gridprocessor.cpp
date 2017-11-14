#include "../lib/gridprocessor.h"

void GridProcessor::process(Grid* grid,int kind){
	switch(kind){
		case 0:
			cout<<"Binary Search"<<endl;
			GridProcessor::binaryTree(grid);
		break;
		default:
			cout<<"BAD PROCESS!"<<endl;
		break;
	};
	grid->printGrid();
}

void GridProcessor::binaryTree (Grid* grid){
	for(int i=0;i<grid->getRows();i++){
		for(int j=0;j<grid->getCols();j++){
			vector<Cell*> neighbors;
			if (grid->getGrid()[i][j].north){
				neighbors.push_back(grid->getGrid()[i][j].north);
				cout<<"north,";
			}
			if (grid->getGrid()[i][j].east){
				neighbors.push_back(grid->getGrid()[i][j].east);
				cout<<"east,";
			}
			if(neighbors.size()>0){
				int index = rand()%neighbors.size();
				cout<<"index:"<<index;
				grid->getGrid()[i][j].link(neighbors[index],true);
				cout<<"linked";
			}
			cout<<endl;
		}
	}
}
