/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:15:46 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/15 12:18:23 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

class Zombie {
    public:
        Zombie( void );
        ~Zombie();

        void announce();
        void setName(const std::string& newName);

    private:
        std::string _name;
};

#endif
