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

Fixed::Fixed() {
  std::cout << "Default constructor called" << std::endl;
  fixedPointNumber = 0;
}

Fixed::Fixed( const Fixed& num ) {
  std::cout << "Copy constructor called" << std::endl;
  *this = num;
}

// rounds the result to the nearest whole number
// 256 or (1 << fractional), same result
Fixed::Fixed(const float num) {
  std::cout << "Float constructor called" << std::endl;
  fixedPointNumber = roundf(num * 256);
}

// fixedPointNumber = num * 256;
Fixed::Fixed(const int num) {
  std::cout << "Int constructor called" << std::endl;
  fixedPointNumber = num << fractional;
}

int Fixed::getRawBits() const {
  return fixedPointNumber;
}

void  Fixed::setRawBits( int const raw ) {
  fixedPointNumber = raw;
}

Fixed&  Fixed::operator=(const Fixed& num) {
  std::cout << "Copy assignment operator called" << std::endl;
  setRawBits(num.getRawBits());
  return *this; // return a reference to this object
}

Fixed:: ~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

// cast to dataType and undo the scaling applied 
float Fixed::toFloat() const {
  return (((float)fixedPointNumber) / 256); 
}

// fixedPointNumber >> fractional
int Fixed::toInt() const {
  return ((int)(roundf((float)fixedPointNumber / 256)));
} 

// reference to output stream a.k.a. std::cout
// reference to Fixed object to be streamed out
std::ostream  &operator<<(std::ostream &out, const Fixed& num) {
  out << num.toFloat();
  return (out);
}

/*
<fixed-point numbers>
- fixed number of bits for the integer part and...
- ...a fixed number of bits for the fractional part
- separation between interger and fractional part is implicit
- applications where performance and resource efficiency are critical
- perform arithmetic directly on the integers, apply scaling for convertion

- shifts the decimal point 8 bits to the left
- you're reserving 8 bits for the fractional part
- there is risk of overflow

num = 1.5f;
1.5 * 256 = 384.0 -> 256 is the scaling factor
roundf(384.0) = 384 -> rounds the result to the rearest integer

floatNum = num / 256.0f; -> result 1.5

<floating numbers>
- IEEE 754
- scientific calculations, graphics, applications requiring large dynamic ranges
- represented using scientific notation in binary form
- sign bit / exponent / mantissa(or significant)

- 1 sign bit = 0 (positive num)

- 8 exponent bits = the power to which the base (2) must be raised to get the normalized form
- the exponent E is 0 because 1.1 x 2^0 = 1.1
- normalize -> 6.75f = 110.11 and needs to be normalized to 1.xxxxx \times 2^E
- 110.11 becomes 1.1011 \times 2^2 (shift the binary point 2 places to the left)
- bias -> always non-negative (unsigned),constant value (127) used to offset the exponent
- biased exponent = E(exponent) + B(bias)
- 0 + 127 = 01111111

- 23 mantissa bits = fraction part in the normalized form
- since the normalized form is 1.1, the mantissa is 1

1.5f = 0 01111111 10000000000000000000000

*/