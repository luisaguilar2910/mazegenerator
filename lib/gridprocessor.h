#include <iostream>
using namespace std;
#include <time.h>
#include <stdlib.h>

#include "../lib/grid.h"

#ifndef GRIDP_LIB
#define GRIDP_LIB

class GridProcessor{
	public:
		static void process(Grid* grid,int kind);
		static void binaryTree (Grid* grid);
};
#endif
