/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:44:32 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/22 12:13:58 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weaponPtr = NULL;
    std::cout << name << "constructor called." <<std::endl;
}

HumanB::~HumanB()
{
    std::cout << this->_name << " destructor called." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weaponPtr = &weapon;
}

void HumanB::attack()
{
    if (this->_weaponPtr && !(this->_weaponPtr->getType().empty()))
    {
        std::cout << this->_name << " attacks with their " << this->_weaponPtr->getType();
        std::cout << std::endl;
    }
    else
    {
        std::cout << this->_name << " attacks unarmed " << std::endl;
    }
}
