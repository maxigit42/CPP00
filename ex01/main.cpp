#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(){
    PhoneBook agenda;

    std::string comando;

    while(1){
        if (!std::cin.good())
            break;
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";

        if (!std::getline(std::cin, comando))
            break;

        if(comando == "EXIT"){
            break;
        }
        else if (comando == "ADD"){
            agenda.add();
        }
        else if(comando == "SEARCH"){
            agenda.search();
        }
    }
    return 0;
}