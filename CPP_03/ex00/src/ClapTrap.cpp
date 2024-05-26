#include "../header/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "\x1b[32mClapTrap default constructor created\x1b[0m" <<std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "\x1b[32mClapTrap constructor " << this->name << " created\x1b[0m" <<std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    *this = src;
    std::cout << "\x1b[32mClapTrap copy constructor " << this->name << " created\x1b[0m" <<std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
    std::cout << "\033[0;32mClapTrap copy operator called for " << src.getName() << "\033[0m" << std::endl;
    this->name = src.getName();
    this->hitPoints = src.getHitPoints();
    this->energyPoints = src.getEnergyPoints();
    this ->attackDamage = src.getDamage();
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "\x1b[31mClapTrap " << this->name << " destroyed!\x1b[0m" << std::endl;
}

int ClapTrap::getHitPoints() const
{
    return hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return energyPoints;
}

std::string ClapTrap::getName( void ) const
{
    return (this->name);
}

int ClapTrap::getDamage() const
{
    return attackDamage;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->energyPoints--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage." << std::endl;
    } else if (this->hitPoints < 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead and can't attack " << target << "." << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " doesn't have enough energy to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > 0)
    {
        this->hitPoints -= amount;
        std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << " Lasting " << this->hitPoints << " points. " << std::endl;
        if (this->hitPoints <= 0)
        {
            std::cout << "ClapTrap " << this->name << " is dead! " << std::endl;
        }
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " is alread dead! " << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->hitPoints += amount;
        this->energyPoints--;
        std::cout << "ClapTrap " << this->name << " was repaired and get " << amount << " points! Now has " << this->hitPoints << " points!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " can't be repaired because he is alread dead! " << std::endl;
    }
}