/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:54:32 by shinckel          #+#    #+#             */
/*   Updated: 2024/04/22 16:13:21 by shinckel         ###   ########.fr       */
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
  fixedPointNumber = num.getRawBits();
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
