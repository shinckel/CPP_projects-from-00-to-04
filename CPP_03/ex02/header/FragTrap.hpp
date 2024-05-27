/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:52:34 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/27 20:57:30 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef FRAGTRAP_HPP
// # define FRAGTRAP_HPP

// #include "ClapTrap.hpp"

// class FragTrap : public ClapTrap
// {
//     public:
//         FragTrap(const std::string& name);
//         ~FragTrap();
//         void highFivesGuys( void );
// };

// #endif

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(const std::string& name);
        FragTrap(FragTrap const& src);
        ~FragTrap();

        FragTrap& operator=(FragTrap const &);
        void highFivesGuys(void);
};

#endif
