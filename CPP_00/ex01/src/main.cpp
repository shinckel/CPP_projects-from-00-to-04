/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:45:27 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/01 19:00:42 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Phonebook.hpp"

userInput   setUserInput(std::string command) {
    if (command == "ADD")
        return userInput::ADD;
    else if (command == "SEARCH")
        return userInput::SEARCH;
    else if (command == "EXIT")
        return userInput::EXIT;
    else
        return userInput::INVALID;
}

void	searchContacts(PhoneBook &phoneBook) {
	Color::Modifier green(Color::FG_GREEN);
	Color::Modifier def(Color::FG_DEFAULT);

    std::cout << green << phoneBook.getNumContacts() << def << std::endl;
	if (phoneBook.getNumContacts())
	{
		std::cout << green << "AVAILABLE CONTACTS:" << def << std::endl;
		phoneBook.displayContacts();

		phoneBook.displaySingleContact();
	}
}

void    redirectUserInput(PhoneBook &phoneBook, userInput in, Color::Modifier red, Color::Modifier def) {
	Contact		contact;

    switch (in)
    {
    case userInput::ADD:
        phoneBook.addContact(contact.setContactdata());
        break;
    case userInput::SEARCH:
        searchContacts(phoneBook);
        break;
    case userInput::INVALID:
        std::cout << red << "INVALID COMMAND..." << def << std::endl;
        break;
    }
}

int main( void )
{
    PhoneBook	phoneBook;
	Color::Modifier red(Color::FG_RED);
    Color::Modifier ylw(Color::FG_YELLOW);
    Color::Modifier def(Color::FG_DEFAULT);

    while (1)
    {
        std::string in;
        std::cout << ylw << "Please enter the command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, in) || setUserInput(in) == userInput::EXIT )
        	return (in == "EXIT" ? (std::cout << red << "EXITING..." << def << std::endl, 1) : 1);
        redirectUserInput(phoneBook, setUserInput(in), red, def);
    }
    return 0;
}