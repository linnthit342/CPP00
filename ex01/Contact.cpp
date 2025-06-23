#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::setFirstName(const std::string &fn)
{
    firstName = fn;
}

void Contact::setLastName(const std::string &ln)
{
    lastName = ln;
}

void Contact::setNickname(const std::string &nn)
{
    nickname = nn;
}

void Contact::setPhoneNumber(const std::string &pn)
{
    phoneNumber = pn;
}

void Contact::setDarkestSecret(const std::string &ds)
{
    darkestSecret = ds;
}

std::string Contact::getFirstName() const
{
    return firstName;
}

std::string Contact::getLastName() const
{
    return lastName;
}

std::string Contact::getNickname() const
{
    return nickname;
}

std::string Contact::getPhoneNumber() const
{
    return phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return darkestSecret;
}

// bool Contact::isEmpty() const
// {
//     return firstName.empty() && lastName.empty() && nickname.empty() && phoneNumber.empty() && darkestSecret.empty();
// }

// void Contact::displayFull() const
// {
//     std::cout << "First Name: " << firstName << std::endl;
//     std::cout << "Last Name: " << lastName << std::endl;
//     std::cout << "Nickname: " << nickname << std::endl;
//     std::cout << "Phone Number: " << phoneNumber << std::endl;
//     std::cout << "Darkest Secret: " << darkestSecret << std::endl;
// }