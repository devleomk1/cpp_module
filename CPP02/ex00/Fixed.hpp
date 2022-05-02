/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:01:54 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/02 21:29:17 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CPP
# define FIXED_CPP

class Fixed
{
private:
	int fixed_num;
	static const int num_bit = 8;
public:
	//Orthodox Canonical Form
	Fixed();								//Default constructor
	Fixed(const Fixed &src);				//Copy constructor
	Fixed &operator=(const Fixed &src);		//Copy Asginment operator
	~Fixed();								//Destructor
};

#endif
