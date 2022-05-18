/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:01:54 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/18 17:02:14 by jisokang         ###   ########.fr       */
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
std::ostream &operator<<(std::ostream &stream, const Fixed &f);		//insertion Asginment operator


#endif
