/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:52:26 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/27 21:28:27 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/FragTrap.hpp"
#include "../header/ScavTrap.hpp"

// int	main(void)
// {
// 	FragTrap	dani("Dani");
// 	FragTrap	sofia("Sofia");

// 	dani.attack(sofia.getName());
// 	sofia.takeDamage(dani.getDamage());
// 	dani.attack(sofia.getName());
// 	sofia.takeDamage(dani.getDamage());
// 	dani.attack(sofia.getName());
// 	sofia.takeDamage(dani.getDamage());	
// 	// sofia.guardGate();
// 	sofia.beRepaired(10);
// 	dani.attack(sofia.getName());
// 	sofia.takeDamage(dani.getDamage());
// 	dani.attack(sofia.getName());
// 	sofia.takeDamage(dani.getDamage());
// 	dani.highFivesGuys();
// 	return 0;
// }

int	main(void)
{
	FragTrap	Pesto("PESTO");
	FragTrap	Jamie("JAMIE");
	FragTrap	c = Pesto;
	ScavTrap	Linda("LINDA");

	Pesto.attack(Jamie.getName());
	Jamie.takeDamage(Pesto.getDamage());
	Pesto.attack(Jamie.getName());
	Jamie.takeDamage(Pesto.getDamage());
	Jamie.highFivesGuys();
	Jamie.beRepaired(15);
	Pesto.attack(Jamie.getName());
	Jamie.takeDamage(Pesto.getDamage());
	Jamie.attack(Linda.getName());
	Linda.takeDamage(Jamie.getDamage());
	Jamie.attack(Linda.getName());
	Linda.takeDamage(Jamie.getDamage());
	Jamie.attack(Linda.getName());
	Linda.takeDamage(Jamie.getDamage());
	Linda.attack(Pesto.getName());
	Pesto.takeDamage(Linda.getDamage());
	Jamie.attack(Linda.getName());
	Linda.takeDamage(Jamie.getDamage());
	Jamie.attack(Linda.getName());
	Linda.takeDamage(Jamie.getDamage());
}
