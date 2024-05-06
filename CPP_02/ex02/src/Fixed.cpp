/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:25:08 by shinckel          #+#    #+#             */
/*   Updated: 2024/05/06 21:45:43 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Fixed.hpp"

Fixed::Fixed() {
  fixedPointNumber = 0;
}

Fixed::Fixed( const Fixed& num ) {
  fixedPointNumber = num.fixedPointNumber;
}

Fixed::Fixed(const float num) {
  fixedPointNumber = roundf(num * 256);
}

Fixed::Fixed(const int num) {
  fixedPointNumber = num << fractional;
}

int Fixed::getRawBits() const {
  return fixedPointNumber;
}

void  Fixed::setRawBits( int const raw ) {
  fixedPointNumber = raw;
}

Fixed&  Fixed::operator=(const Fixed& num) {
  fixedPointNumber = num.getRawBits();
  return *this;
}

Fixed:: ~Fixed() {}

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

// Arithmetic operators
Fixed Fixed::operator+(const Fixed& b) const {
  return (Fixed(this->toFloat() + b.toFloat()));
}

Fixed Fixed::operator-(const Fixed& b) const {
  return (Fixed(this->toFloat() - b.toFloat()));
}

Fixed Fixed::operator*(const Fixed& b) const {
  return (Fixed(this->toFloat() * b.toFloat()));
}

Fixed Fixed::operator/(const Fixed& b) const {
  return (Fixed(this->toFloat() / b.toFloat()));
}

// Comparison operators
bool  Fixed::operator>(const Fixed &b) const {
  return (fixedPointNumber > b.getRawBits());
}

bool  Fixed::operator<(const Fixed &b) const {
  return (fixedPointNumber < b.getRawBits());
}

bool  Fixed::operator>=(const Fixed &b) const {
  return (fixedPointNumber >= b.getRawBits());
}

bool  Fixed::operator<=(const Fixed &b) const {
  return (fixedPointNumber <= b.getRawBits());
}

bool  Fixed::operator==(const Fixed &b) const {
  return (fixedPointNumber != b.getRawBits());
}

bool  Fixed::operator!=(const Fixed &b) const {
  return (fixedPointNumber != b.getRawBits());
}

// Increment/decrement operators
Fixed &Fixed::operator++() {
  fixedPointNumber++;
  return(*this);
}

Fixed Fixed::operator++(int) {
  Fixed tmp;
  
  tmp = *this;
  ++(*this);
  return (tmp);
}

Fixed &Fixed::operator--() {
  fixedPointNumber--;
  return(*this);
}

Fixed Fixed::operator--(int) {
  Fixed tmp;
  
  tmp = *this;
  --(*this);
  return (tmp);
}

// Static member functions for min and max
Fixed &Fixed::min(Fixed& a, Fixed& b) {
  return (a < b) ? a : b; 
}

Fixed &Fixed::max(Fixed& a, Fixed& b) {
  return (a > b) ? a : b; 
}

const Fixed &Fixed::min(const Fixed& a, const Fixed& b) {
  return (a < b) ? a : b; 
}

const Fixed &Fixed::max(const Fixed& a, const Fixed& b) {
  return (a > b) ? a : b; 
}
