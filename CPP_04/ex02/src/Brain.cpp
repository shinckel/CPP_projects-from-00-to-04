/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:57:15 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:57:21 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructed" << std::endl;
}

Brain &Brain::operator=(const Brain &copia)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = copia.ideas[i];
	std::cout << "Brain copied" << std::endl;
	return (*this);
}

Brain::Brain(const Brain &copia)
{
	*this = copia;
}
