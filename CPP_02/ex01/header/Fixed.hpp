/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:35:02 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/06 20:46:10 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <fstream>

class Fixed {
  public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& num);
    Fixed(const float num); // a constructor that takes a constant float as parameter
    Fixed(const int num);

    Fixed&            operator=(const Fixed& num); // assignment operator(=) will invoke it
    int               getRawBits( void ) const; // it's a read only function
    void              setRawBits( int const raw );

    float             toFloat( void ) const;
    int               toInt( void ) const;

  private:
    int               fixedPointNumber;
    static const int  fractional = 8;
};

std::ostream  &operator<<(std::ostream &out, const Fixed &num);

#endif
