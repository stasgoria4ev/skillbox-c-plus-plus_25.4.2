#include <iostream>
#include "kbd.h"

bool CorrectInputNumber(std::string& number) {
    bool good = true;
    for (int i = 0; i < number.length() && good; i++)
        if (number[i] < '0' || number[i] > '9') 
            good = false;
    return good;
}

void Input(int(& array)[8], int& countInput) {
    std::cout << "Enter 8 integers.\n";
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        std::string number;
        do {
            std::cout << "Number " << i + 1 << ": ";
            std::cin >> number;
            if (CorrectInputNumber(number))
                array[i] = std::stoi(number);
            else 
                std::cout << "Invalid number, please enter again.\n";
        } while (!CorrectInputNumber(number));
    }
    countInput++;
}