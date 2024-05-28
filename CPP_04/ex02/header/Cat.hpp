/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:58:14 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:58:21 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat : public AAnimal
{
public:
	Cat();
	Cat(const Cat &copia);
	~Cat();
	Cat &operator=(const Cat &copia);
	void makeSound() const;
};

#endif
