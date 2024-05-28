/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:54:33 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:54:34 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	Brain *brain;
	
public:
	Dog();
	Dog(const Dog &copia);
	~Dog();
	Dog &operator=(const Dog &copia);
	void makeSound() const;
};

#endif
