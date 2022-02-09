cmake_minimum_required(VERSION 3.0.0)

add_executable(StasGvProject myprogram.cpp cpu.cpp gpu.cpp disk.cpp kbd.cpp ram.cpp)
target_include_directories(StasGvProject PUBLIC ${CMAKE_SOURCE_DIR}/include)