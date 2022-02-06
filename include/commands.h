#pragma once

void CorrectInputCommand(std::string& command) { 
    do {
        std::cout << ":";
        std::cin >> command;
        if (command != "sum" && command != "save" && command != "load" && command != "input" && command != "display" && command != "exit")
            std::cout << "Invalid command, please try again.\n";
    } while (command != "sum" && command != "save" && command != "load" && command != "input" && command != "display" && command != "exit");
}