/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:02:00 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/06 17:50:28 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// A default constructor that initializes the fixed-point number value to 0.
Fixed::Fixed( void ) : fp_value( 0 )		//생성자에서 fp_value을 0으로 초기화
{
	std::cout << GREEN "Default constructor" RESET " called\n";
}

// Copy constructor
Fixed::Fixed(const Fixed &f)
{
	//deep copy
	std::cout << YELLOW "Copy" RESET " constructor called\n";

	// this->fp_value = f.getRawBits();
	// 이건 왜 안될까? 이게 깊은 복사 아닌가?

	*this = f;
	// 이건 됨, 이건 f가 없어지면 날라가는거 아닌가?
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
