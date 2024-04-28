/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:45:27 by shinckel          #+#    #+#             */
/*   Updated: 2024/04/28 17:57:42 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Phonebook.hpp"

// void	searchContacts(PhoneBook phoneBook) {
// 	Color::Modifier green(Color::FG_GREEN);
// 	Color::Modifier def(Color::FG_DEFAULT);

// 	if (phoneBook.getNumContacts() > 0)
// 	{
// 		std::cout << green << "Available contacts:" << def << std::endl;
// 		phoneBook.displayContacts();

// 		int index;
// 		phoneBook.displaySingleContact(index);
// 	}
// }

int main()
{
    PhoneBook	phoneBook;
	Contact		contact;
	Color::Modifier red(Color::FG_RED);
    Color::Modifier def(Color::FG_DEFAULT);

    while (1)
    {
        std::string command;
        std::cout << "Please enter the command (ADD, SEARCH, EXIT): ";

		if (!std::getline(std::cin, command) || command == "EXIT")
        	return (command == "EXIT" ? (std::cout << red << "EXITING..." << def << std::endl, 1) : 1);
		else if (command == "ADD")
            phoneBook.addContact(contact.setContactdata());
		// else if (command == "SEARCH")
		// 	searchContacts(phoneBook);
		else
			std::cout << red << "Invalid command." << def << std::endl;


        // else if (command == "ADD")
        // {
        //     Contact contact = Contact::setContactInfo();
        //     phoneBook.addContact(contact);
        // }
        // else if (command == "SEARCH")
        // {
        //     if (phoneBook.getNumContacts() > 0)
        //     {
        //         std::cout << "Available contacts:" << std::endl;
        //         phoneBook.displayContacts();

        //         int index;
        //         phoneBook.displayContact(index);
        //     }
        //     else
        //         std::cout << "No contact added" << std::endl;
        // }
        // else
        //     std::cout << "Invalid command." << std::endl;
    }
    return 0;
}