/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:27:03 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/22 19:30:11 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Harl.hpp"

void (Harl::*function[4])(void);

Harl::Harl( void )
{
    std::cout << "Constructor called" << std::endl;

    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";

    function[0] = &Harl::debug;
    function[1] = &Harl::info;
    function[2] = &Harl::warning;
    function[3] = &Harl::error;
}

Harl::~Harl( void )
{
    std::cout << "Destructor called" << std::endl;
}

void Harl::debug( void )
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" <<  std::endl;
}

void Harl::info( void )
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*function[i])();
            return ;
        }
    }
    std::cout << "wrong option!"<< std::endl;
}
