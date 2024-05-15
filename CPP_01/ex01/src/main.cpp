/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:24:00 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/15 12:12:44 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int	main(void)
{
	int	N = 5;
	Zombie	*horde = zombieHorde(N, "Walker");
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zombie " << i + 1 << ": ";
		horde[i].announce();
	}

    horde[2].setName("Crawler");

    std::cout << "Third zombie (after name change): ";
    horde[2].announce();
	
	delete [] horde;
  return 0;
}
