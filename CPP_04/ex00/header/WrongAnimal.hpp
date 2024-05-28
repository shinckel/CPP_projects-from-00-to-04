/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:47:15 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:47:30 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copia);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &copia);
	void	makeSound() const;
	std::string	getType() const;
};

#endif
