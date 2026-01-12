#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add(){
    std::string input;
    //Uso el modulo 8 para que al llegar a 8 vuelva a 0
    int i = this->_index % 8;

    std::cout << "--- Adding New Contact [" << i + 1 << "/8] ---" << std::endl;

    while(true){
        std::cout << "First Name: ";
        if(!std::getline(std::cin, input)) return; //Maneja Ctrl+D
        if(!input.empty()) break;
        std::cout << "Field can't be empty!" << std::endl;
    }
    this->_contacts[i].setFirstName(input);

    while(true){
        std::cout << "Last Name: ";
        if(!std::getline(std::cin, input)) return; //Maneja Ctrl+D
        if(!input.empty()) break;
        std::cout << "Field can't be empty!" << std::endl;
    }
    this->_contacts[i].setLastName(input);

    while(true){
        std::cout << "Nickname: ";
        if(!std::getline(std::cin, input)) return; //Maneja Ctrl+D
        if(!input.empty()) break;
        std::cout << "Field can't be empty!" << std::endl;
    }
    this->_contacts[i].setNickname(input);

    while(true){
        std::cout << "Phone Number: ";
        if(!std::getline(std::cin, input)) return; //Maneja Ctrl+D
        if(!input.empty()) break;
        std::cout << "Field can't be empty!" << std::endl;
    }
    this->_contacts[i].setPhoneNumber(input);
    
    while(true){
        std::cout << "Darkest Secret: ";
        if(!std::getline(std::cin, input)) return; //Maneja Ctrl+D
        if(!input.empty()) break;
        std::cout << "Field can't be empty!" << std::endl;
    }
    this->_contacts[i].setDarkestSecret(input);

    this->_index++;
    std::cout << "Contact added successfully" << std::endl;
}

void PhoneBook::search() {
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|__________|__________|__________|__________|" << std::endl;

    for (int i = 0; i < 8; i++) {
        // Si el nombre está vacío, es que no hay contacto ahí. Saltamos.
        if (this->_contacts[i].getFirstName().empty()) 
            continue;

        // Imprimir columna Índice
        std::cout << "|" << std::setw(10) << i << "|";
        
        // Imprimir columna Nombre (con lógica de corte)
        std::string str = this->_contacts[i].getFirstName();
        if (str.length() > 10)
            str = str.substr(0, 9) + ".";
        std::cout << std::setw(10) << str << "|";

        str = this->_contacts[i].getLastName();
        if(str.length() > 10)
            str = str.substr(0, 9) + ".";
        std::cout << std::setw(10) << str << "|";

        str = this->_contacts[i].getNickname();
        if(str.length() > 10)
            str = str.substr(0, 9) + ".";
        std::cout << std::setw(10) << str << "|";

        std::cout << std::endl;
    }
    std::cout << " ------------------------------------------- " << std::endl;

    //pedir indice 
    std::string index_str;
    std::cout << "Enter index to view details: ";
    if (!std::getline(std::cin, index_str)) return; // Ctrl+D

    // Validar que escribió un número
    // atoi convierte string a int. (Requiere <cstdlib>)
    // Verificamos que no esté vacío y que sea un solo dígito
    if (index_str.empty() || index_str.length() > 1 || !isdigit(index_str[0])) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }

    int index = index_str[0] - '0'; // Truco char a int simple
    // O podrías usar std::atoi(index_str.c_str());

    // Validar rango (0 a 7) y que el contacto exista
    if (index >= 0 && index < 8 && !this->_contacts[index].getFirstName().empty()) {
        // MOSTRAR DETALLES
        std::cout << "First Name: " << this->_contacts[index].getFirstName() << std::endl;
        std::cout << "Last Name: " << this->_contacts[index].getLastName() << std::endl;
        std::cout << "Nickname: " << this->_contacts[index].getNickname() << std::endl;
        std::cout << "Phone: " << this->_contacts[index].getPhoneNumber() << std::endl;
        std::cout << "Secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
    } else {
        std::cout << "Index out of range or empty!" << std::endl;
    }
}