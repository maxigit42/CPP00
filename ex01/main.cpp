#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(){
    // 1. Instanciamos la Agenda
    PhoneBook agenda;

    // 2. Variable para guardar lo que escriba el usuario
    std::string comando;

    while(1){
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";

        // Leemos la línea entera. Si no hay nada (EOF), salimos
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
        // Si escribe otra cosa, no hacemos nada y el bucle vuelve a empezar
    }
    return 0;
}