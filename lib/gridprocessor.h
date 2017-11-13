#include <iostream>
using namespace std;

#include "../lib/grid.h"

#ifndef GRIDP_LIB
#define GRIDP_LIB

class GridProcessor{
	public:
		static void process(Grid* grid,int kind);
};
#endif
