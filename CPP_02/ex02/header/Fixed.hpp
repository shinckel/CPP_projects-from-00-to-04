/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:25:14 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/06 21:43:45 by shinckel         ###   ########.fr       */
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
    Fixed(const float num);
    Fixed(const int num);
    Fixed&  operator=(const Fixed& num);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    float   toFloat(void) const;
    int     toInt(void) const;

    // Arithmetic operators
    Fixed               operator+(const Fixed& b) const;
    Fixed               operator-(const Fixed& b) const;
    Fixed               operator*(const Fixed& b) const;
    Fixed               operator/(const Fixed& b) const;

    // Comparison operators
    bool                operator>(const Fixed& b) const;
    bool                operator<(const Fixed& b) const;
    bool                operator>=(const Fixed& b) const;
    bool                operator<=(const Fixed& b) const;
    bool                operator==(const Fixed& b) const;
    bool                operator!=(const Fixed& b) const;

    // Increment/decrement operators
    Fixed               &operator++();
    Fixed               operator++(int);
    Fixed               &operator--();
    Fixed               operator--(int);

    // Static member functions for min and max
    static Fixed        &min(Fixed& a, Fixed& b);
    static Fixed        &max(Fixed& a, Fixed& b);
    static const Fixed  &min(const Fixed& a, const Fixed& b);
    static const Fixed  &max(const Fixed& a, const Fixed& b);

  private:
    int               fixedPointNumber;
    static const int  fractional = 8;
};

std::ostream  &operator<<(std::ostream &out, const Fixed &num);

#endif
