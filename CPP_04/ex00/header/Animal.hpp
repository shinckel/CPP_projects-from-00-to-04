/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:38:21 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:45:55 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

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
