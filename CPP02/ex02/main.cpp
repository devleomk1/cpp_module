/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:02:03 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/08 20:12:20 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;		//  0
	std::cout << ++a << std::endl;		//  0.00390625
	std::cout << a << std::endl;		//  0.00390625
	std::cout << a++ << std::endl;		//  0.00390625
	std::cout << a << std::endl;		//  0.0078125
	std::cout << b << std::endl;		// 10.1016

	std::cout << Fixed::min( a, b ) << std::endl;

	return 0;
}
