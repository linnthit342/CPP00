#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact _contacts[8];
    int _index;
    int _count;
    bool getInput(const std::string &prompt, std::string &input) const;

    void displayContacts() const;
    void displayContactDetails(int index) const;

public:
    PhoneBook(void);
    ~PhoneBook(void);
    void add_cont(void);
    // void displayAllContacts(void) const;

    void search_cont(void);
    //  void print(Contact contact);
    //  /* Getters */
    //  Contact get_contact(int index);
};

#endif
