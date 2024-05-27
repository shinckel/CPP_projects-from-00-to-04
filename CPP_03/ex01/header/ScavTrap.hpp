/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:54:12 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/27 20:31:06 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

/*
<inheritance>
- make one class inherits the members of another class
- base class and derived classes
- distinguish entities, but share a lot of common things by deriving from a base class
- class hierarchy is a set of classes ordered in a lattice created by derivation
- a smiley face is a kind of a circle that is a kind of shape
            shape
            /   \
        circle  triangle
        /
    smiley

<access modifiers>
- public -> 
- virtual public -> ensures that only one instance of the base class is created

<construction destruction chaining>
- derived class obj uses the base class, therefore base must be constructed first
- derived class is deleted through a pointer to a base class
- that destructor then implicitly invokes the destructors of its bases and members
- derived class might depend on resources allocated by the base class, so...
- if base class destructor ran first, derived class might try to use released resources

- ClapTrap constructor called
- ScavTrap constructor called
- ScavTrap destructor called
- ClapTrap destructor called
*/ 
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap( void );
        ScavTrap(const std::string& name);
        ScavTrap( ScavTrap const & src );
        ~ScavTrap();

        ScavTrap & operator=(ScavTrap const & src);

        void guardGate();
        void attack(const std::string& target);
};

#endif
