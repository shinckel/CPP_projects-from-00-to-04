/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:54:18 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/27 20:32:28 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ScavTrap.hpp"

int	main(void)
{
	ScavTrap	pesto("PESTO");
	ScavTrap	jamie("JAMIE");

	pesto.attack(jamie.getName());
	jamie.takeDamage(pesto.getDamage());
	pesto.attack(jamie.getName());
	jamie.takeDamage(pesto.getDamage());
	pesto.attack(jamie.getName());
	jamie.takeDamage(pesto.getDamage());	
	jamie.guardGate();
	jamie.beRepaired(10);
	pesto.attack(jamie.getName());
	jamie.takeDamage(pesto.getDamage());
	pesto.attack(jamie.getName());
	jamie.takeDamage(pesto.getDamage());
	pesto.attack(jamie.getName());
	jamie.takeDamage(pesto.getDamage());
	pesto.attack(jamie.getName());
	jamie.takeDamage(pesto.getDamage());
	return 0;
}
