#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
    private:
        // Las 5 variables que pide el ejercicio
        // Usamos el guion bajo por convención para saber que son privadas
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;

    public:
        // Constructor: Se ejecuta al crear el contacto
        Contact();
        // Destructor: Se ejecuta al eliminarlo (opcional aquí, pero buena práctica saber que existe)
        ~Contact();

        // --- SETTERS (Para guardar información) ---
        // Reciben un string y no devuelven nada
        void    setFirstName(std::string str);
        void    setLastName(std::string str);
        void    setNickname(std::string str);
        void    setPhoneNumber(std::string str);
        void    setDarkestSecret(std::string str);

        // --- GETTERS (Para leer información) ---
        // No reciben nada y devuelven un string  
        // El 'const' al final significa: "Esta función promete NO modificar nada dentro de la clase"
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;
};

#endif