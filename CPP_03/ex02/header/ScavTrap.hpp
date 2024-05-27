/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:52:37 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/27 20:58:20 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(const std::string& name);
        ScavTrap(ScavTrap const& src);
        ~ScavTrap();

        ScavTrap& operator=(ScavTrap const& src);

        void guardGate();
        void attack(const std::string& target);
};

#endif
