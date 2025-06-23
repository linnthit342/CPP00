#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->_index = 0;
    this->_count = 0;
}
PhoneBook::~PhoneBook(void)
{
    return;
}

bool PhoneBook::getInput(const std::string &prompt, std::string &input) const
{
    std::cout << prompt;
    std::getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "Info can't be empty." << std::endl;
        return false;
    }
    return true;
}

void PhoneBook::add_cont(void)
{
    std::string input;

    if (!getInput("Enter first name: ", input))
        return;
    this->_contacts[this->_index % 8].setFirstName(input);

    if (!getInput("Enter last name: ", input))
        return;
    this->_contacts[this->_index % 8].setLastName(input);

    if (!getInput("Enter nickname: ", input))
        return;
    this->_contacts[this->_index % 8].setNickname(input);

    if (!getInput("Enter phone number: ", input))
        return;
    this->_contacts[this->_index % 8].setPhoneNumber(input);

    if (!getInput("Enter darkest secret: ", input))
        return;
    this->_contacts[this->_index % 8].setDarkestSecret(input);

    this->_index++;
    if (_count < 8)
        _count++;
}
void ft_print_string(std::string s)
{
    if (s.length() < 10)
    {
        std::cout << std::string(10 - s.length(), ' ') << s;
    }
    else
    {
        std::cout << s.substr(0, 9) << ".";
    }
}

void PhoneBook::displayContacts() const
{
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    for (int i = 0; i < 8; ++i)
    {
        if (_contacts[i].getFirstName().empty())
            continue;

        std::cout << "|";
        // Manual integer-to-string conversion
        char indexChar = '0' + i + 1;       // +1 because you want 1-based index
        std::string indexStr(1, indexChar); // Create string from single char
        std::cout << std::string(10 - indexStr.length(), ' ') << indexStr << "|";

        ft_print_string(_contacts[i].getFirstName());
        std::cout << "|";

        ft_print_string(_contacts[i].getLastName());
        std::cout << "|";

        ft_print_string(_contacts[i].getNickname());
        std::cout << "|" << std::endl;
    }

    std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void PhoneBook::displayContactDetails(int index) const
{
    if (index < 0 || index >= _count)
    {
        std::cout << "Invalid index!" << std::endl;
        return;
    }

    std::cout << "First Name: " << _contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << _contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << _contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << _contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << _contacts[index].getDarkestSecret() << std::endl;
}

void PhoneBook::search_cont(void)
{
    if (_count == 0)
    {
        std::cout << "Phonebook is empty!" << std::endl;
        return;
    }

    displayContacts();

    std::string input;
    std::cout << "Enter contact index (1-" << _count << "): ";
    std::getline(std::cin, input);
    if (std::cin.eof())
        return;

    // Validate input is exactly one digit
    if (input.length() != 1 || !isdigit(input[0]))
    {
        std::cout << "Invalid index! Please enter a single digit." << std::endl;
        return;
    }

    int index = input[0] - '0';
    if (index < 1 || index > _count || index > 8)
    {
        std::cout << "Index out of range! Maximum index is " << _count << std::endl;
        return;
    }

    displayContactDetails(index - 1);
}

// void PhoneBook::displayAllContacts(void) const
// {
//     std::cout << "\nCurrent Contacts:\n";
//     for (int i = 0; i < std::min(this->_index, 8); ++i)
//     {
//         std::cout << "----- Contact " << i << " -----" << std::endl;
//         this->_contacts[i].displayFull();
//         std::cout << std::endl;
//     }
// }
