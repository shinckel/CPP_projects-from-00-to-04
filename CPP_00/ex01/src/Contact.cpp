/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:40:04 by shinckel          #+#    #+#             */
/*   Updated: 2024/04/28 17:42:33 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Phonebook.hpp"

Contact::Contact(){}

Contact::~Contact(){}

int _is_valid(std::string phone)
{
    for (char ch : phone)
    {
        if (!std::isdigit(ch))
        {
            std::cout << "Please insert only digits" << std::endl;
            return (0);
        }
    }
    return (1);
}

Contact Contact::setContactdata() {
    Contact contact;

    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cout << "Enter First Name: ";
    std::getline(std::cin >> std::ws, firstName);

    std::cout << "Enter Last Name: ";
    std::getline(std::cin >> std::ws, lastName);

    std::cout << "Enter Nickname: ";
    std::getline(std::cin >> std::ws, nickName);

    std::cout << "Enter Phone Number: ";
    std::getline(std::cin >> std::ws, phoneNumber);
    while (!_is_valid(phoneNumber))
    {
        std::cout << "Enter Phone Number: ";
        std::getline(std::cin >> std::ws, phoneNumber);
    }
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin >> std::ws, darkestSecret);

    contact.firstName = firstName;
    contact.lastName = lastName;
    contact.nickName = nickName;
    contact.phoneNumber = phoneNumber;
    contact.darkestSecret = darkestSecret;
    return contact;
}

std::string Contact::getFirstName(){
    return firstName;
}

std::string Contact::getLastName(){
    return lastName;
}

std::string Contact::getNickName(){
    return nickName;
}

std::string Contact::getPhoneNumber(){
    return phoneNumber;
}

std::string Contact::getDarkestSecret(){
    return darkestSecret;
}
