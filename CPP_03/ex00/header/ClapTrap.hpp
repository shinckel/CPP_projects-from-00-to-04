#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
    protected:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    
    public:
        ClapTrap( void );
        ClapTrap(const std::string& name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap( void );
        
        ClapTrap & operator=(ClapTrap const & src);

        std::string    getName( void ) const;
        int getDamage() const;
        int getHitPoints() const;
        int getEnergyPoints() const;

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
