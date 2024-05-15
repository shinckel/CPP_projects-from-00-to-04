/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:14:18 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/15 11:10:29 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

Zombie::Zombie( std::string name ) : _name( name ) {
	std::cout << "Zombie constructor called" << std::endl;
}

Zombie::~Zombie( void ) {
	Color::Modifier red(Color::FG_RED);
  Color::Modifier def(Color::FG_DEFAULT);

	std::cout << red << "Destroying " << _name << def << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
