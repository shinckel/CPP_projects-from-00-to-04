/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:50:06 by shinckel          #+#    #+#             */
/*   Updated: 2024/04/22 16:23:10 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Fixed.hpp"

//construction definition. Separation of Interface and Implementation
Fixed::Fixed() {
  std::cout << "Default constructor called" << std::endl;
  fixedPointNumber = 0;
}

Fixed::Fixed( const Fixed& num ) {
  std::cout << "Copy constructor called" << std::endl;
  fixedPointNumber = num.fixedPointNumber;
}

// rounds the result to the nearest whole number
// 256 or (1 << fractional), same result
Fixed::Fixed(const float num) {
  std::cout << "Float constructor called" << std::endl;
  fixedPointNumber = roundf(num * 256);
}

Fixed::Fixed(const int num) {
  std::cout << "Int constructor called" << std::endl;
  fixedPointNumber = num << fractional;
}

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return fixedPointNumber;
}

void  Fixed::setRawBits( int const raw ) {
  fixedPointNumber = raw;
}

Fixed&  Fixed::operator=(const Fixed& num) {
  std::cout << "Copy assignment operator called" << std::endl;
  fixedPointNumber = num.getRawBits();
  return *this; // return a reference to this object
}

Fixed:: ~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const {
  return (((float)fixedPointNumber) / 256); 
}

int Fixed::toInt() const {
  return ((int)(roundf(fixedPointNumber >> fractional)));
} 

std::ostream  &operator<<(std::ostream &out, const Fixed& num) {
  out << num.toFloat();
  return (out);
}
