/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:02:00 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/17 14:15:28 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
	std::cout << GREEN "Int constructor" RESET " called\n";
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
	fp_value = f.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &f)
{
	stream << f.toFloat();
	return (stream);
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
