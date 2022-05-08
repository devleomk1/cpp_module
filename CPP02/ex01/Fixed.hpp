/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:01:54 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/06 21:31:04 by jisokang         ###   ########.fr       */
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

//이건 왜 밖으로 빼야하는 걸까?
std::ostream &operator<<(std::ostream &stream, const Fixed &f);		//insertion Asginment operator


#endif
