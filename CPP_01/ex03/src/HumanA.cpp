/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:44:35 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/22 12:20:04 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
    std::cout << name << " Constructor called " << std::endl;
    this->_name = name;
}


HumanA::~HumanA()
{
    std::cout << this->_name << " destructor called" << std::endl;
}

void HumanA::attack() {
    if (this->weapon.getType().empty())
        std::cout << this->_name << " does not have a weapon" << std::endl;
    else
    {
        std::cout << this->_name << " attacks with their " << this->weapon.getType();
        std::cout << std::endl;
    }
        
}
