cmake_minimum_required(VERSION 3.10)

# set the project name
project(cpp)

# for generating compile_command.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "") 
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

# add the executable
add_executable(main main.cpp)

# add the subdirectory
add_subdirectory(includes)

# link the library
target_link_libraries(main helpers)
