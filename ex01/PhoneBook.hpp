#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
# include <iostream>
# include <iomanip> // Esta librería la necesitaremos luego para std::setw (las columnas)
# include <cstdlib>

class PhoneBook
{
    private:
        // EL ARRAY DE OBJETOS
        // Aquí declaras que tienes espacio para 8 contactos.
        // Al arrancar, C++ creará automáticamente 8 contactos vacíos aquí.
        Contact _contacts[8];

        // EL ÍNDICE
            // Necesitamos una variable para recordar por dónde vamos.
            // Si he llenado 2 contactos, el siguiente va en el [2].
            // Si he llenado 8, el siguiente va en el [0] (para sobrescribir el más viejo).
        int _index;
    public:
        PhoneBook();
        ~PhoneBook();

        void add();
        void search();
};

#endif