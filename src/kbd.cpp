#include <iostream>
#include "kbd.h"
#include "commands.h"
#include "ram.h"

void Input(int& countInput) {
    std::cout << "Enter 8 integers.\n";
    for (int i = 0; i < 8; ++i) {
        std::string number;
        do {
            std::cout << "Number " << i + 1 << ": ";
            std::cin >> number;
            if (CorrectInputNumber(number)) {
                int temp = std::stoi(number);
                write(i, temp);//запись в оперативную память
            } else 
                std::cout << "Invalid number, please enter again.\n";
        } while (!CorrectInputNumber(number));
    }
    countInput++;
}