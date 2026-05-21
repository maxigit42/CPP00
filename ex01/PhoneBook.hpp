#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
# include <iostream>
# include <iomanip> // Esta librería la necesitaremos luego para std::setw (las columnas)
# include <cstdlib>

class PhoneBook
{
    private:
        Contact _contacts[8];
        int _index;

    public:
        PhoneBook();
        ~PhoneBook();

        void add();
        void search();
};

#endif