/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:14:18 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/12 15:45:30 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

Zombie::Zombie( std::string name ) : _name( name ) {
	Color::Modifier green(Color::FG_GREEN);
	Color::Modifier def(Color::FG_DEFAULT);

	std::cout << green << "Zombie constructor called" << def << std::endl;
}

Zombie::~Zombie( void ) {
	Color::Modifier red(Color::FG_RED);
	Color::Modifier def(Color::FG_DEFAULT);

	std::cout << red << "Zombie destructor called" << def << std::endl;
}

void	Zombie::announce( void ) {
	Color::Modifier green(Color::FG_GREEN);
	Color::Modifier def(Color::FG_DEFAULT);

	std::cout << green << _name << ": >: BraiiiiiiinnnzzzZ..."
}