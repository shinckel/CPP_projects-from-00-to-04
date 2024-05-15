/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:14:22 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/15 12:13:07 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump( std::string name);

int main( void ) {
    Color::Modifier ylw(Color::FG_YELLOW);
    Color::Modifier blue(Color::FG_L_BLUE);
	  Color::Modifier def(Color::FG_DEFAULT);

    std::cout << blue << "We will create a zombie" << def << std::endl;
    Zombie z("Zombie One");
    std::cout << ylw << "Let's announce the zombie created" << def << std::endl;
    z.announce();

    std::cout << blue << "we will create a new zombie using a pointer" << def << std::endl;
    Zombie* zombie = newZombie("Zombie two");
    std::cout << ylw << "Let's announce the zombie created" << def << std::endl;
    zombie->announce();
    delete zombie;

    std::cout << blue << "We will create now a zombie that can introduce himself" << def << std::endl;
    randomChump("Zombie three");
    return 0;
}
