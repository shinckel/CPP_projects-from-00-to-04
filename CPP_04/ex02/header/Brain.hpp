/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:57:30 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:57:41 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain &copia);
	Brain &operator=(const Brain &copia);
	~Brain();
};

#endif
