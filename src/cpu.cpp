#include <iostream>
#include "cpu.h"
#include "ram.h"

void Compute(int& countInput) {
    if (countInput == 0) {
        std::cout << "Start with command \"input/load\" or choose another command.\n";
        return;
    } else {
        int sum = 0;
        for (int i = 0; i < 8; ++i) 
            sum += read(i);//чтение из оперативной памяти
        std::cout << "Sum = " << sum << '\n';
    }
}