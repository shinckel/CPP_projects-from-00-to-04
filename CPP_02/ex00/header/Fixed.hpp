/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:35:02 by shinckel          #+#    #+#             */
/*   Updated: 2024/04/22 16:06:46 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <fstream>

/* constructor - initialize objects of the class
 * destructor - clean up when objects of the class are destroyed
 * copy constructor - create a new object as a copy
 * assignment operator - copy values from one object to another existing object
 */
class Fixed {
    int               fixedPointNumber;
    static const int  fractional = 8;

  public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& num);
    Fixed&  operator=(const Fixed& num); // assignment operator(=) will invoke it
    int     getRawBits( void ) const; // it's a read only function
    void    setRawBits( int const raw );
};

#endif
