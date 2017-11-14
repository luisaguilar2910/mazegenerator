#include <iostream>
using namespace std;
#include <stdlib.h>

#include "lib/cell.h"
#include "lib/grid.h"
#include "lib/gridprocessor.h"

int main(){
	srand(time(0));
	cout<<"Testing..."<<endl;
	Grid* grid = new Grid(5,5);
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<grid->getGrid()[i][j].getRow()<<" ";
		}
		cout<<endl;
	}
	GridProcessor::process(grid,0);
	return 0;
}
