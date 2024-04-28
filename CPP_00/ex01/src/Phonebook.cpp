/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:44:58 by shinckel          #+#    #+#             */
/*   Updated: 2024/04/28 17:45:55 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Phonebook.hpp"

PhoneBook::PhoneBook() : n_contacts(0) {}

PhoneBook::~PhoneBook(){}

int PhoneBook::getNumContacts() {
    return n_contacts;
}

void		addContact();
		int			getNumContacts();
		void		displayContacts();
		bool		displaySingleContact(int &index);
		std::string	truncateString(const std::string str);

void PhoneBook::addContact(const Contact& contact)
{
    if (n_contacts < 8)
        contacts[n_contacts++] = contact;
    else
    {
        std::cout << "You can have a maximum of 8 contacts";
        std::cout << std::endl;
        std::cout << "Do you want to delete the oldest one?(Y/N)";
        std::cout << std::endl;
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
            std::cout << "Contact not added." << std::endl;
        }
    }
}

void PhoneBook::displayContacts(){
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

bool PhoneBook::displaySingleContact(int& index)
{
    std::cout << "Enter index of desired entry (or press -1 to leave): ";
    if (!(std::cin >> index) || index == -1) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return true;
    }
    
    while (index < 0 || index >= getNumContacts())
    {
        std::cout << "Invalid index. Please enter a valid index: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpa o buffer
        
        if (!(std::cin >> index) || index == -1) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return true; // Usuário deseja sair
        }
    }
    if (index >= 0 && index < n_contacts)
    {
        std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
        std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
        std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
        std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return false;
}

std::string PhoneBook::truncateString(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}
