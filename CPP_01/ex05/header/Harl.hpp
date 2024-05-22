/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:27:58 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/22 19:28:48 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

# include <string>
# include <iostream>
# include "Colors.hpp"

class Harl {
    public:
        Harl( void );
        ~Harl( void );
        void complain( std::string level );

    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        std::string levels[4];
};

#endif
