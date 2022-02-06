cmake_minimum_required(VERSION 3.0.0)

#add_executable(StasGvProject myprogram.cpp ${CMAKE_SOURCE_DIR}/include/commands.h)
add_executable(StasGvProject myprogram.cpp)
target_include_directories(StasGvProject PUBLIC ${CMAKE_SOURCE_DIR}/include)