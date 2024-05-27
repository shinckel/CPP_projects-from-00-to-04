/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 22:09:23 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/27 22:09:25 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"

int main() {
    // Create a ClapTrap object
    ClapTrap pesto("PESTO");
    ClapTrap jamie("JAMIE");
    // Test the member functions
    pesto.attack(jamie.getName());
    jamie.takeDamage(pesto.getDamage());
    jamie.beRepaired(3);
    jamie.attack(pesto.getName());
	pesto.takeDamage(jamie.getDamage());
	pesto.beRepaired(3);
    pesto.attack(jamie.getName());
    jamie.takeDamage(pesto.getDamage());
    pesto.attack(jamie.getName());
    jamie.takeDamage(pesto.getDamage());
    pesto.attack(jamie.getName());
    jamie.takeDamage(pesto.getDamage());
    pesto.attack(jamie.getName());
    jamie.takeDamage(pesto.getDamage());
    pesto.attack(jamie.getName());
    jamie.takeDamage(pesto.getDamage());
    pesto.attack(jamie.getName());
    jamie.takeDamage(pesto.getDamage());
    pesto.attack(jamie.getName());
    jamie.takeDamage(pesto.getDamage());
    pesto.attack(jamie.getName());
    jamie.takeDamage(pesto.getDamage());
    pesto.attack(jamie.getName());

    return 0;
}