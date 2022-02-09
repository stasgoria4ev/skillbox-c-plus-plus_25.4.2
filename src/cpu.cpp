#include <iostream>
#include "cpu.h"
#include "ram.h"

void Compute() {
    int sum = 0;
    for (int i = 0; i < 8; ++i) 
        sum += read(i);//чтение из оперативной памяти
    std::cout << "Sum = " << sum << '\n';
}