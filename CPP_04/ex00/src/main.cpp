/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:36:20 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:48:55 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Cat.hpp"
#include "../header/Dog.hpp"
#include "../header/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;

	std::cout << "------------" << std::endl;
	const WrongAnimal* wrong = new WrongCat();
	wrong->makeSound();
	delete wrong;
	return 0;
}
