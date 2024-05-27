/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:52:29 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/27 21:51:14 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << green << "ScavTrap default constructor created" 
        << def << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) {
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier def(Color::FG_DEFAULT);

    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << green << "ScavTrap constructor called for " 
        << name << def << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src) {
	*this = src;
}

ScavTrap::~ScavTrap() {
    Color::Modifier red(Color::FG_RED);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << red << "ScavTrap " << this->_name << " destroyed!" 
        << def << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << green << "ScavTrap copy assignment operator called for " 
        << src.getName() << def << std::endl;
    this->_name = src.getName();
    this->_hitPoints = src.getHitPoints();
    this->_energyPoints = src.getEnergyPoints();
    this ->_attackDamage = src.getDamage();
    return *this;
}

void ScavTrap::guardGate() {
    Color::Modifier blue(Color::FG_L_BLUE);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << blue << "ScavTrap " << this->_name 
        << " is now in Gate keeper mode" << def << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    Color::Modifier pur(Color::FG_PURPLE);
    Color::Modifier red(Color::FG_RED);
    Color::Modifier def(Color::FG_DEFAULT);

    if (this->_energyPoints >= 1) {
        this->_energyPoints--;
        std::cout << pur << "ScavTrap " << this->_name << " attacks " 
            << target << ", causing " << this->_attackDamage 
                << " points of damage." << def << std::endl;
    } else {
        std::cout << red << "ScavTrap " << this->_name << 
            " doesn't have enough energy to attack!" << def << std::endl;
    }
}
