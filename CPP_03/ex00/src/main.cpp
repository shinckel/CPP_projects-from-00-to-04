#include "../header/ClapTrap.hpp"

int main() {
    // Create a ClapTrap object
    ClapTrap first("Dani");
    ClapTrap second("Sofia");
    // Test the member functions
    first.attack(second.getName());
    second.takeDamage(first.getDamage());
    second.beRepaired(3);
    second.attack(first.getName());
	first.takeDamage(second.getDamage());
	first.beRepaired(3);
    first.attack(second.getName());
    second.takeDamage(first.getDamage());
    first.attack(second.getName());
    second.takeDamage(first.getDamage());
    first.attack(second.getName());
    second.takeDamage(first.getDamage());
    first.attack(second.getName());
    second.takeDamage(first.getDamage());
    first.attack(second.getName());
    second.takeDamage(first.getDamage());
    first.attack(second.getName());
    second.takeDamage(first.getDamage());
    first.attack(second.getName());
    second.takeDamage(first.getDamage());
    first.attack(second.getName());
    second.takeDamage(first.getDamage());
    first.attack(second.getName());

    return 0;
}