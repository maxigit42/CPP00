#include "contact.hpp"

Contact::Contact()
{
        this->_firstName = "";
        this->_lastName = "";
        this->_nickName = "";
        this->_phoneNumber = "";
        this->_darkestSecret = "";
}

    //Setters
void Contact::setFirstName(std::string name){
    this->_firstName = name;
}
void Contact::setLastName(std::string lastName){
    this->_lastName = lastName;
}
void Contact::setNickname(std::string nickName){
    this->_nickName = nickName;
}
void Contact::setPhoneNumber(std::string phoneNumber){
    this->_phoneNumber = phoneNumber;
}
void Contact::setDarkestSecret(std::string darkestSecret){
    this->_darkestSecret = darkestSecret;
}

    //Getters
std::string Contact::getFirstName() const{
    return this->_firstName;
}  // el const esta para no modificar las variables
std::string Contact::getLastName() const{
    return this->_lastName;
}
std::string Contact::getNickname() const{
    return this->_nickName;
}
std::string Contact::getPhoneNumber() const{
    return this->_phoneNumber;
}
std::string Contact::getDarkestSecret() const{
    return this->_darkestSecret;
}

Contact::~Contact()
{
}