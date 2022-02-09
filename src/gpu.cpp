#include <iostream>
#include "gpu.h"
#include "ram.h"

void Display(int& countInput) {
    if (countInput == 0) {
        std::cout << "Start with command \"input/load\" or choose another command.\n";
        return;
    } else {
        for (int i = 0; i < 8; ++i)  
            std::cout << read(i) << ' ';//чтение из оперативной памяти
        std::cout << '\n';
    }
}