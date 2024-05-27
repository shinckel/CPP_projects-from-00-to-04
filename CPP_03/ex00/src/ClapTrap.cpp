/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:16:10 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/27 20:52:04 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << green << "ClapTrap default constructor created" 
        << def << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier def(Color::FG_DEFAULT);

    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << green << "ClapTrap constructor called for " 
        << this->_name << def << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier def(Color::FG_DEFAULT);

    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    *this = src;
    std::cout << green << "ClapTrap copy constructor called for " 
        << this->_name << def << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const& src)
{
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << green << "ClapTrap copy assignment operator called for " 
        << src.getName() << def << std::endl;
    this->_name = src.getName();
    this->_hitPoints = src.getHitPoints();
    this->_energyPoints = src.getEnergyPoints();
    this ->_attackDamage = src.getDamage();
    return *this;
}

ClapTrap::~ClapTrap()
{
    Color::Modifier red(Color::FG_RED);
    Color::Modifier def(Color::FG_DEFAULT);

    std::cout << red << "ClapTrap " << this->_name << " destroyed!"
         << def << std::endl;
}

int ClapTrap::getHitPoints() const
{
    return _hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return _energyPoints;
}

std::string ClapTrap::getName( void ) const
{
    return _name;
}

int ClapTrap::getDamage() const
{
    return _attackDamage;
}

void ClapTrap::attack(const std::string& target)
{
    Color::Modifier pur(Color::FG_PURPLE);
    Color::Modifier red(Color::FG_RED);
    Color::Modifier def(Color::FG_DEFAULT);

    if (this->_energyPoints > 0 && this->_hitPoints > 0) {
        this->_energyPoints--;
        std::cout << pur << "ClapTrap " << this->_name << " attacks " 
            << target << ", causing " << this->_attackDamage << 
                " points of damage" << def << std::endl;
    } else if (this->_hitPoints < 0) {
        std::cout << red << "ClapTrap " << this->_name << 
            " is dead and can't attack " << target << def << std::endl;
    } else {
        std::cout << red << "ClapTrap " << this->_name << 
            " doesn't have enough energy to attack!" << def << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    Color::Modifier pur(Color::FG_PURPLE);
    Color::Modifier red(Color::FG_RED);
    Color::Modifier def(Color::FG_DEFAULT);

    if (this->_hitPoints > 0)
    {
        this->_hitPoints -= amount;
        std::cout << pur << "ClapTrap " << this->_name << " takes " << amount 
            << " points of damage!" << " Lasting " << this->_hitPoints 
                << " points" << def << std::endl;
        if (this->_hitPoints <= 0) {
            std::cout << red << "ClapTrap " << this->_name << 
                " is dead!" << def << std::endl;
        }
    }
    else {
        std::cout << red << "ClapTrap " << this->_name << 
            " is already dead!" << def << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    Color::Modifier pur(Color::FG_PURPLE);
    Color::Modifier red(Color::FG_RED);
    Color::Modifier def(Color::FG_DEFAULT);

    if (this->_energyPoints > 0 && this->_hitPoints > 0) {
        this->_hitPoints += amount;
        this->_energyPoints--;
        std::cout << pur << "ClapTrap " << this->_name << " was repaired and get " 
            << amount << " points! Now has " << this->_hitPoints 
                << " points!" << def << std::endl;
    } else {
        std::cout << red << "ClapTrap " << this->_name << 
            " can't be repaired because he is already dead!" << def << std::endl;
    }
}