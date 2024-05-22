/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:44:24 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/21 09:10:14 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/HumanA.hpp"
#include "../header/HumanB.hpp"

int main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		club.setType("");
		bob.attack();
	}
	std::cout << std::endl;
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB	jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		club.setType("");
		jim.attack();
	}
	
	return 0;
}
