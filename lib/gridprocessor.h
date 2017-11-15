#include <iostream>
using namespace std;
#include <time.h>
#include <stdlib.h>
#include <ctime>

#include "../lib/grid.h"

#ifndef GRIDP_LIB
#define GRIDP_LIB

class GridProcessor{
	public:
		static double process(Grid* grid,int kind);
		static double binaryTree (Grid* grid);
};
#endif
