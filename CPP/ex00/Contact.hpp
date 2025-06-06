#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact();
    ~Contact();

    // Setters
    void setFirstName(const std::string &fn);
    void setLastName(const std::string &ln);
    void setNickname(const std::string &nn);
    void setPhoneNumber(const std::string &pno);
    void setDarkestSecret(const std::string &ds);

    // Getters
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    // Utility functions
    // bool isEmpty() const;
    // void displayFull() const;
};

#endif