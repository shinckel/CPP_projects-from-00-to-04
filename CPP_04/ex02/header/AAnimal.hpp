/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:56:55 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 21:10:28 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

// abstract class -> contains at least one pure virtual function
// pure virtual function -> it has no implementation
// abstract classes cant instantiate
class AAnimal
{
protected:
	std::string	type;
	Brain *brain;

public:
	AAnimal();
	AAnimal(const AAnimal &copia);
	virtual ~AAnimal();
	AAnimal &operator=(const AAnimal &copia);
	virtual void	makeSound() const = 0;
	std::string	getType() const;
};

#endif
