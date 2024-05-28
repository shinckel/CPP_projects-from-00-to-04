/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:52:59 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:53:01 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal(const Animal &copia);
	virtual ~Animal();
	Animal &operator=(const Animal &copia);
	virtual void	makeSound() const;
	std::string	getType() const;
};

#endif
