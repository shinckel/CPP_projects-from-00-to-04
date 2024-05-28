/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:38:21 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/29 00:27:26 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

/*
<polymorphism>
		Animal
		/	\
	 Dog	Cat

Dog dog;
Animal &a = dog;

- 'a' is type Animal but will act as a Dog
- Now, I can use methods related to Dog, even if I am dealing with Animal
- For it, it must be created inside Animal a virtual funcion
- Animal will be overriden by the derivated class member function and output 'ao ao'
- Even so, you can continue to treat Animal as an Animal and perform actions only related to it
- If I want to make it act as a dog, it must always be a reference!

virtual void output();
void Animal::output();
void Dog::output(){ std::cout << "ao ao" << std:endl };

<virtual function>
  			shape
            /   \
        circle  triangle
        /
    smiley

- define later, when you know what to do
- I can write a library in terms of shapes, and make it behave accordingly to the referenced item
- the shape coming in could be anything e.g. circle versus triangle
- it will work even if the library code is compiled beforehand and the shape is still unknown
- important degrees of freedom for a library design
*/

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
