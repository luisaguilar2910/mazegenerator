set(HEADERS ../lib/cell.h)
add_library(cell_lib cell.cpp ${HEADERS})

set(HEADERS ../lib/grid.h)
add_library(grid_lib grid.cpp ${HEADERS})

set(HEADERS ../lib/gridprocessor.h)
add_library(gridprocessor_lib gridprocessor.cpp ${HEADERS})
