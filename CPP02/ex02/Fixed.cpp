/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:02:00 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/09 15:44:49 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <bitset>

// Default Constructor
Fixed::Fixed( void ) : fp_value( 0 )
{
	std::cout << GREEN "Default constructor" RESET " called\n";
}

// Int constructor
Fixed::Fixed( const int num ) : fp_value( num << frac_bits )
{
	std::cout << GREEN "Int constructor" RESET " called\n";
}

// Float constructor
// Fixed::Fixed( const float num ) : fp_value( (int)(num * (1 << frac_bits)) )
Fixed::Fixed( const float num ) : fp_value( (int)(roundf(num * (1 << frac_bits))) )
{
	std::cout << GREEN "Float constructor" RESET " called\n";
}

// Copy constructor
Fixed::Fixed(const Fixed &f)
{
	//deep copy
	std::cout << YELLOW "Copy" RESET " constructor called\n";
	*this = f;
}

Fixed &Fixed::operator=(const Fixed &f)
{
	//'='를 내 마음대로 다시 정의 하는 작업
	//'+', '-', '<' 등 다양한 오퍼레이터를 정의 할 수 있다.
	std::cout << YELLOW "Copy" RESET " assignment operator called\n";
	// ?????
	// if(this != &f)
		fp_value = f.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed &f)
{
	Fixed value(this->toFloat() + f.toFloat());
	return (value);
}

Fixed Fixed::operator-(const Fixed &f)
{
	Fixed value(this->toFloat() - f.toFloat());
	return (value);
}

Fixed Fixed::operator*(const Fixed &f)
{
	Fixed value(this->toFloat() * f.toFloat());
	return (value);
}

Fixed Fixed::operator/(const Fixed &f)
{
	Fixed value(this->toFloat() / f.toFloat());
	return (value);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &f)
{
	stream << f.toFloat();
	return (stream);
}

bool Fixed::operator>(const Fixed &f)
{
	return (this->fp_value > f.getRawBits());
}

bool Fixed::operator<(const Fixed &f)
{
	return (this->fp_value < f.getRawBits());
}

bool Fixed::operator>=(const Fixed &f)
{
	return (this->fp_value >= f.getRawBits());
}

bool Fixed::operator<=(const Fixed &f)
{
	return (this->fp_value <= f.getRawBits());
}

bool Fixed::operator==(const Fixed &f)
{
	return (this->fp_value == f.getRawBits());
}

bool Fixed::operator!=(const Fixed &f)
{
	return (this->fp_value != f.getRawBits());
}

// pre-increment and post-increment, pre-decrement and post-decrement
Fixed &Fixed::operator++()
{
	(this->fp_value)++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return (temp);
}

// ????????
const Fixed &Fixed::min( const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

Fixed &Fixed::min( Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

Fixed::~Fixed()
{
	std::cout << RED "Destructor" RESET " called\n";
}

int Fixed::getRawBits( void ) const
{
	std::cout << BLUE "getRawBits" RESET " member function called\n";
	return (this->fp_value);
}

void Fixed::setRawBits( int const raw )
{
	this->fp_value = raw;
}

int Fixed::toInt ( void ) const
{
	return (this->fp_value >> this->frac_bits);
}

float Fixed::toFloat ( void ) const
{
	return ((float)this->fp_value / (1 << frac_bits));
}
