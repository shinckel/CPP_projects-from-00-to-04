/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:52:23 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/27 21:46:59 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/FragTrap.hpp"

FragTrap::FragTrap(void) {
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << green << "FragTrap default constructor created" 
        << def << std::endl;
}

FragTrap::FragTrap(const std::string& name)
{
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier def(Color::FG_DEFAULT);

    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;

    std::cout << green << "FragTrap constructor called for " 
        << this->_name << def << std::endl;
}

FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src) {
	*this = src;
}

FragTrap::~FragTrap(void) {
    Color::Modifier red(Color::FG_RED);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << red << "FragTrap " << this->_name << " destroyed!"
        << def << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const& src) {
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << green << "FragTrap copy assignment operator called for " 
        << src.getName() << def << std::endl;
    this->_name = src.getName();
    this->_hitPoints = src.getHitPoints();
    this->_energyPoints = src.getEnergyPoints();
    this ->_attackDamage = src.getDamage();
    return *this;
}

void FragTrap::highFivesGuys(void) {
    Color::Modifier blue(Color::FG_L_BLUE);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << blue << "FragTrap " << this->_name << 
        " wants a positive high five!" << def << std::endl;
}
