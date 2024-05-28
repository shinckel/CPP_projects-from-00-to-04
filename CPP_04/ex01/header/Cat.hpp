/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:54:03 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:54:05 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	Brain *brain;

public:
	Cat();
	Cat(const Cat &copia);
	~Cat();
	Cat &operator=(const Cat &copia);
	void makeSound() const;
};

#endif
