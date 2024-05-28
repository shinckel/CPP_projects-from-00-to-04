/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:52:36 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:52:43 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Animal.hpp"

Animal::Animal()
{
	type = "";
	std::cout << "Animal constructed" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructed" << std::endl;
}

Animal &Animal::operator=(const Animal &copia)
{
	type = copia.type;
	std::cout << "Animal copied" << std::endl;
	return (*this);
}

Animal::Animal(const Animal &copia)
{
	*this = copia;
}

void	Animal::makeSound() const
{
	std::cout << "(generic animal sound)" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
