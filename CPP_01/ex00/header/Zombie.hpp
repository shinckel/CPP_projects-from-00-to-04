/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:14:42 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/12 15:34:08 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

class Zombie {
	public:
		Zombie( std::string _name );
		~Zombie( void );

		void	announce( void );

	private:
		std::string	_name;
};

#endif