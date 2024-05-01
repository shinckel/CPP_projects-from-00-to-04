/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:44:58 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/01 19:23:01 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Phonebook.hpp"

PhoneBook::PhoneBook() : n_contacts(0) {}

PhoneBook::~PhoneBook(){}

int PhoneBook::getNumContacts() {
    return n_contacts;
}

// review this one
void PhoneBook::addContact(const Contact& contact)
{
    Color::Modifier red(Color::FG_RED);
    Color::Modifier ylw(Color::FG_YELLOW);

    if (n_contacts < 8)
        contacts[n_contacts++] = contact;
    else
    {
        std::cout << red << "You can have a maximum of 8 contacts";
        std::cout << std::endl;
        std::cout << "Do you want to delete the oldest one?(Y/N)";
        std::cout << ylw << std::endl;
        std::string answer;
        std::getline(std::cin >> std::ws, answer);
        if (answer == "y" || answer == "Y")
        {
            for (int i = 0; i < 8 - 1; i++)
                contacts[i] = contacts[i + 1];
            contacts[8 - 1] = contact;
        }
        else
        {
            std::cout << red << "Contact not added." << ylw << std::endl;
        }
    }
}

void PhoneBook::displayContacts( void ) {
    std::cout << std::setw(10) << "Index" << " | ";
    std::cout << std::setw(10) << "Name" << " | ";
    std::cout << std::setw(10) << "Last Name" << " | ";
    std::cout << std::setw(10) << "Nickname";
    std::cout << std::endl;
    for (int i = 0; i < n_contacts; ++i)
    {
        std::cout << std::setw(10) << i << " | ";
        std::cout << std::setw(10) << truncateString(contacts[i].getFirstName()) << " | ";
        std::cout << std::setw(10) << truncateString(contacts[i].getLastName()) << " | ";
        std::cout << std::setw(10) << truncateString(contacts[i].getNickName());
        std::cout << std::endl;
    }
}

void    PhoneBook::displaySingleContact()
{
    int index;
    Color::Modifier ylw(Color::FG_YELLOW);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << ylw << "Enter index of desired entry (or press 9 to leave): ";
    if (!(std::cin >> index) || index == 9) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return ;
    }
    
    while (index < 0 || index >= getNumContacts())
    {
        std::cout << ylw << "Invalid index. Please enter a valid index: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        if (!(std::cin >> index) || index == 9) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return ; // user wants to logout
        }
    }
    if (index >= 0 && index < n_contacts)
    {
        std::cout << def << "First Name: " << contacts[index].getFirstName() << std::endl;
        std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
        std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
        std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << ylw << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return ;
}

std::string PhoneBook::truncateString(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}
