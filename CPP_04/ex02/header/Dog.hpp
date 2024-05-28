/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:58:47 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:58:53 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public AAnimal
{
public:
	Dog();
	Dog(const Dog &copia);
	~Dog();
	Dog &operator=(const Dog &copia);
	void makeSound() const;
};

#endif
