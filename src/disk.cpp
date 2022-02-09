#include <iostream>
#include <fstream>
#include "disk.h"
#include "ram.h"

void Save(int& countInput) {
    //std::ofstream file("save.bin", std::ios::binary);
    std::ofstream file("data.txt");
    
    if (!file.is_open()) {
        std::cerr << "File not open...\n";
        return;
    }
    
    if (countInput == 0) {
        std::cout << "Start with command \"input\".\n";
        return;
    } else {
        for (int i = 0; i < 8; ++i) 
            //file.write((char*)&array[i], sizeof(array[i]));
            file << read(i) << '\n';
        file.close();
    }
}

void Load(int& countInput) {
    //std::ifstream file("save.bin", std::ios::binary);
    std::ifstream file("data.txt");
    
    if (!file.is_open()) {
        std::cerr << "File not open...\n";
        return;
    } else
        countInput++;
    
    for (int i = 0; i < 8; ++i) {
        //file.read((char*)&array[i], sizeof(array[i]));
        //file >> array[i];//  '\n';
        int temp;
        file >> temp;
        write(i, temp);
    }
    file.close();
}