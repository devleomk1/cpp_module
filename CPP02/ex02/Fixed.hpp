/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:01:54 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/09 18:58:22 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CPP
# define FIXED_CPP

# include <iostream>
# include <cmath>
# include "color.hpp"

class Fixed
{
private:
	int fp_value;
	static const int frac_bits = 8;
public:
	Fixed( void );							//Default constructor
	Fixed( const int num );					//Int constructor
	Fixed( const float num );				//Float constructor
	Fixed( const Fixed &f );				//Copy constructor
	Fixed &operator=(const Fixed &f);		//Copy Asginment operator

	//왜 '&'안붙임가 어디에 붙고 안붙고가 잘 이해가 안된다! 평가 받기전에 꼭 이해하기!
	bool operator>(const Fixed &f);
	bool operator<(const Fixed &f);
	bool operator>=(const Fixed &f);
	bool operator<=(const Fixed &f);
	bool operator==(const Fixed &f);
	bool operator!=(const Fixed &f);

	Fixed operator+(const Fixed &f);
	Fixed operator-(const Fixed &f);
	Fixed operator*(const Fixed &f);
	Fixed operator/(const Fixed &f);

	Fixed &operator++();					// Prefix increment operator.
	Fixed operator++(int);					// Postfix increment operator.
	Fixed &operator--();					// Prefix decrement operator.
	Fixed operator--(int);					// Postfix decrement operator.

	//ㅇㅣ거 왜  스스테테틱틱?
	static const Fixed &min( const Fixed &a, const Fixed &b );
	static Fixed &min( Fixed &a, Fixed &b );
	static const Fixed &max( const Fixed &a, const Fixed &b );
	static Fixed &max( Fixed &a, Fixed &b );


	~Fixed();								// Destructor

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	int		toInt( void ) const;
	float	toFloat( void ) const;
};

//이건 왜 밖으로 빼야하는 걸까?
std::ostream &operator<<(std::ostream &stream, const Fixed &f);		//insertion Asginment operator


#endif
