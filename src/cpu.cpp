#include <iostream>
#include "cpu.h"

void Compute(int(& array)[8]) {
    int sum = 0;
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) 
        sum += array[i];
    std::cout << "Sum = " << sum << '\n';
}