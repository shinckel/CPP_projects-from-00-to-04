/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:36:35 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:46:51 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog created" << std::endl;
}

Dog &Dog::operator=(const Dog &copia)
{
	type = copia.type;
	std::cout << "Dog copied";
	return (*this);
}

Dog::Dog(const Dog &copia): Animal()
{
	*this = copia;
}

Dog::~Dog()
{
	std::cout << "Dog destructed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Ao Ao" << std::endl;
}
