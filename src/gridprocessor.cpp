#include "../lib/gridprocessor.h"

double GridProcessor::process(Grid* grid,int kind){
	switch(kind){
		case 0:
			cout<<"Binary Search"<<endl;
			return GridProcessor::binaryTree(grid);
		break;
		default:
			cout<<"BAD ARGS!"<<endl;
			return -1;
		break;
	};
}

double GridProcessor::binaryTree (Grid* grid){
	int start = clock();
	for(int i=0;i<grid->getRows();i++){
		for(int j=0;j<grid->getCols();j++){
			vector<Cell*> neighbors;
			if (grid->getGrid()[i][j].north){
				neighbors.push_back(grid->getGrid()[i][j].north);
			}
			if (grid->getGrid()[i][j].east){
				neighbors.push_back(grid->getGrid()[i][j].east);
			}
			if(neighbors.size()>0){
				int index = rand()%neighbors.size();
				grid->getGrid()[i][j].link(neighbors[index],true);
			}
		}
	}
	int stop = clock();
	return (stop-start)/double(CLOCKS_PER_SEC)*1000;
}
