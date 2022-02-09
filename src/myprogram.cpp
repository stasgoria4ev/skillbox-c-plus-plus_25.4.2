#include <iostream>
#include "commands.h"
#include "ram.h"
#include "kbd.h"
#include "gpu.h"
#include "cpu.h"
#include "disk.h"

bool CorrectInputNumber(std::string& number) {
    bool good = true;
    for (int i = 0; i < number.length() && good; i++)
        if (number[i] < '0' || number[i] > '9') 
            good = false;
    return good;
}

void CorrectInputCommand(std::string& command) { 
    do {
        std::cout << ":";
        std::cin >> command;
        if (command != "sum" && command != "save" && command != "load" && command != "input" && command != "display" && command != "exit")
            std::cout << "Invalid command, please try again.\n";
    } while (command != "sum" && command != "save" && command != "load" && command != "input" && command != "display" && command != "exit");
}

int main () {
    std::string command;
    std::cout << "Choose command(sum/save/load/input/display/exit).\n";
    CorrectInputCommand(command);
    int countInput = 0;

    if (command == "sum") {
        std::cout << "Start with command \"input/load\".\n";
        do {
            std::cout << ":";
            std::cin >> command;
            if (command != "input" && command != "load" && command != "exit") 
                std::cout << "Command no \"input/load\"..\n";
            else if (command == "input") Input(countInput); 
            else if (command == "load") Load(countInput); 
            else if (command == "exit") return 0;
        } while (command != "input" && command != "load" && command != "exit");
    } else if (command == "save") {
        std::cout << "Start with command \"input\".\n";
        do {
            std::cout << ":";
            std::cin >> command;
            if (command != "input" && command != "exit")
                std::cout << "Command no \"input\"..\n";
            else if (command == "input") Input(countInput);
            else if (command == "exit") return 0;
        } while (command != "input" && command != "exit");
    } else if (command == "input") Input(countInput);
    else if (command == "load") Load(countInput);
    else if (command == "display") Display(countInput);
    else return 0;

    while (command != "exit") {
        std::cout << "Choose command(sum/save/load/input/display/exit).\n";
        CorrectInputCommand(command);
            
        if (command == "sum")
            Compute();
        else if (command == "save")
            Save(countInput);
        else if (command == "load") 
            Load(countInput);
        else if (command == "display")                                    
            Display(countInput);
        else if (command == "input") 
            Input(countInput);
    }
}