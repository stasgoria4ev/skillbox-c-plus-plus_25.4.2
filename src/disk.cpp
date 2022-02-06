#include <iostream>
#include <fstream>
#include "disk.h"

void Save(int(& array)[8]) {
    //std::ofstream file("save.bin", std::ios::binary);
    std::ofstream file("data.txt");
    
    if (!file.is_open()) {
        std::cerr << "File not open...\n";
        return;
    }
    
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) 
        //file.write((char*)&array[i], sizeof(array[i]));
        file << array[i] << '\n';
    file.close();
}

void Load(int(& array)[8], int& countInput) {
    //std::ifstream file("save.bin", std::ios::binary);
    std::ifstream file("data.txt");
    
    if (!file.is_open()) {
        std::cerr << "File not open...\n";
        return;
    } else
        countInput++;
    
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) 
        //file.read((char*)&array[i], sizeof(array[i]));
        file >> array[i];//  '\n';
    file.close();
}