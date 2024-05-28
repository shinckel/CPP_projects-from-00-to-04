/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:57:50 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:58:04 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat created" << std::endl;
	brain = new Brain;
}

Cat &Cat::operator=(const Cat &copia)
{
	type = copia.type;
	std::cout << "Cat copied";
	*brain = *copia.brain;
	return (*this);
}

Cat::Cat(const Cat &copia) : AAnimal()
{
	*this = copia;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
