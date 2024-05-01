/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:40:04 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/01 19:25:40 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Phonebook.hpp"

Contact::Contact(){}

Contact::~Contact(){}

int _is_valid(std::string phone)
{
    Color::Modifier red(Color::FG_RED);
    Color::Modifier ylw(Color::FG_YELLOW);

    for (char ch : phone)
    {
        if (!std::isdigit(ch))
        {
            std::cout << red << "Please insert only digits" << ylw << std::endl;
            return (0);
        }
    }
    return (1);
}

Contact Contact::setContactdata() {
    Contact contact;

    std::cout << "Enter First Name: ";
    std::getline(std::cin >> std::ws, contact.firstName);

    std::cout << "Enter Last Name: ";
    std::getline(std::cin >> std::ws, contact.lastName);

    std::cout << "Enter Nickname: ";
    std::getline(std::cin >> std::ws, contact.nickName);

    std::cout << "Enter Phone Number: ";
    std::getline(std::cin >> std::ws, contact.phoneNumber);
    while (!_is_valid(contact.phoneNumber))
    {
        std::cout << "Enter Phone Number: ";
        std::getline(std::cin >> std::ws, contact.phoneNumber);
    }
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin >> std::ws, contact.darkestSecret);

    return contact;
}

std::string Contact::getFirstName() {
    return firstName;
}

std::string Contact::getLastName() {
    return lastName;
}

std::string Contact::getNickName() {
    return nickName;
}

std::string Contact::getPhoneNumber() {
    return phoneNumber;
}

std::string Contact::getDarkestSecret() {
    return darkestSecret;
}
