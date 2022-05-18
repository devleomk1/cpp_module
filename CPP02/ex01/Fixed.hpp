/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:01:54 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/18 16:53:34 by jisokang         ###   ########.fr       */
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
	~Fixed();								//Destructor

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	int		toInt( void ) const;
	float	toFloat( void ) const;
};
std::ostream &operator<<(std::ostream &stream, const Fixed &f);		//insertion Asginment operator


#endif
