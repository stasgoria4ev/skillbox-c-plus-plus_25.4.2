#include <iostream>
#include "gpu.h"

void Display(int(& array)[8], int& countInput) {
    if (countInput == 0) {
        std::cout << "Start with command \"input/load\".\n";
        return;
    } else {
        for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) 
            std::cout << array[i] << ' ';
        std::cout << '\n';
    }
}