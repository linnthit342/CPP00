#include "PhoneBook.hpp"
#include <iostream>
#include "Contact.hpp"
#include <string>
#include <unistd.h>
int main()
{
    PhoneBook phb;
    std::string cmd;

    do
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, cmd);

        if (cmd == "ADD")
        {
            phb.add_cont();
        }

        else if (cmd == "SEARCH")
        {
            phb.search_cont();
        }

        if (std::cin.eof())
        {
            std::cout << std::endl;
            return (0);
        }

    } while (cmd != "EXIT");

    // std::cout << "PID: " << getpid() << std::endl;
    // std::cout << "Waiting 30 seconds... run `leaks " << getpid() << "` in another terminal." << std::endl;
    // sleep(30); // give yourself time to run the leaks command manually
    return (0);
}

/*
#include <iostream>
#include "Contact.hpp"
using namespace std;

class PhoneBook
{
private:
    Contact contact[8];

public:
    // Store a single contact at index i % 8
    void setPhoneBook(string newContact, int i)
    {
        contact[i % 8] = newContact;
    }

    string getContact(int cindex)
    {
        if (cindex < 0 || cindex >= 8)
        {
            cout << "Index out of range" << endl;
            return "";
        }
        return contact[cindex];
    }
};

int main()
{
    PhoneBook myObj;
    string cmd;
    int i = 0;

    cout << "ADD" << "\n";
    cout << "SEARCH" << "\n";
    cout << "EXIT" << "\n";
    do
    {
        cout << "Enter command: ";

        cin >> cmd;
        cin.ignore(); // ignore newline leftover after cin

        if (cmd == "ADD")
        {
            string newContact;
            cout << "Enter Contact: ";
            getline(cin, newContact);

            myObj.setPhoneBook(newContact, i);
            i++;
        }

        else if (cmd == "SEARCH")
        {
            int index;
            cout << "Enter index (0-7) to retrieve contact: ";
            cin >> index;

            cout << "Contact at index " << index << ": " << myObj.getContact(index) << endl;
        }

    } while (cmd != "EXIT");

    return 0;
}

// class PhoneBook
// {
// private:
//     string contact[8];

// public:
//     void setPhoneBook(string c[8], int i)
//     {
//         if (i < 8)
//         {
//             contact[i] = c[i];
//         }

//         if (i >= 8)
//         {
//             contact[i % 8] = c[i];
//         }
//     }
//     string getContact(int cindex)
//     {
//         if (cindex < 0)
//         {
//             cout << "Index out of range" << endl;
//             return "";
//         }

//         return contact[cindex];
//     }
// };

// int main()
// {
//     PhoneBook myObj;
//     string myContacts[8];
//     string cmd;

//     int i = 0;
//     myObj.setPhoneBook(myContacts, i);
//     do
//     {
//         cout << "ADD" << "\n";
//         cout << "SEARCH" << "\n";
//         cout << "EXIT" << "\n";
//         cout << "Enter command: ";

//         cin >> cmd;
//         cin.ignore();

//         if (cmd == "ADD")
//         {
//             cout << "Enter Contact: ";
//             getline(cin, myContacts[i]);

//             myObj.setPhoneBook(myContacts, i);
//             i++;
//         }

//         if (cmd == "SEARCH")
//         {
//             int index;
//             cout << "Enter index (0-7) to retrieve contact: ";
//             cin >> index;

//             cout << "Contact at index " << index << ": " << myObj.getContact(index) << endl;
//         }
//     } while (cmd != "EXIT");
//     return 0;
// }

*/