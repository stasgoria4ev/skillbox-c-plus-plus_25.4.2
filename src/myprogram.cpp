#include <iostream>
#include "commands.h"
#include "ram.cpp"
//#include "kbd.h"
#include "kbd.cpp"
//#include "gpu.h"
#include "gpu.cpp"
//#include "cpu.h"
#include "cpu.cpp"
//#include "disk.h"
#include "disk.cpp"

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
            else if (command == "input") Input(array, countInput); 
            else if (command == "load") Load(array, countInput); 
            else if (command == "exit") return 0;
        } while (command != "input" && command != "load" && command != "exit");
    } else if (command == "save") {
        std::cout << "Start with command \"input\".\n";
        do {
            std::cout << ":";
            std::cin >> command;
            if (command != "input" && command != "exit")
                std::cout << "Command no \"input\"..\n";
            else if (command == "input") Input(array, countInput);
            else if (command == "exit") return 0;
        } while (command != "input" && command != "exit");
    } else if (command == "input") Input(array, countInput);
    else if (command == "load") Load(array, countInput);
    else if (command == "display") Display(array, countInput);
    else return 0;

    while (command != "exit") {
        std::cout << "Choose command(sum/save/load/input/display/exit).\n";
        CorrectInputCommand(command);
            
        if (command == "sum")
            Compute(array);
        else if (command == "save")
            Save(array);
        else if (command == "load") 
            Load(array, countInput);
        else if (command == "display")                                    
            Display(array, countInput);
        else if (command == "input") 
            Input(array, countInput);
    }
}