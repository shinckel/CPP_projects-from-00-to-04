/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:54:08 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/27 21:07:23 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include "Colors.hpp" 

class ClapTrap {
    protected:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;
    
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
