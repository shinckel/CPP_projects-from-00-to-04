/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:53:37 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/28 18:53:39 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "string"

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
