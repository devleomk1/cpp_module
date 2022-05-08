/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:01:54 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/08 20:26:41 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CPP
# define FIXED_CPP

# include <iostream>
# include "color.hpp"

class Fixed
{
private:
	int fp_value;
	static const int frac_bits = 8;
public:
	//Orthodox Canonical Form
	Fixed();								//Default constructor
	Fixed(const Fixed &f);					//Copy constructor
	Fixed &operator=(const Fixed &f);		//Copy Asginment operator
	~Fixed();								//Destructor

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
