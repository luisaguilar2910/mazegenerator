project("mazegenerator")
cmake_minimum_required(VERSION 2.6)

include_directories("${PROJECT_SOURCE_DIR}/src")
add_subdirectory(src)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} cell_lib)
target_link_libraries(${PROJECT_NAME} grid_lib)
target_link_libraries(${PROJECT_NAME} gridprocessor_lib)
