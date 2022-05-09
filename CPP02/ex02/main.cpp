/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:02:03 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/09 19:02:23 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{
	Fixed a (1);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "max : " << Fixed::max( a, b ) << std::endl;
	std::cout << "min : " << Fixed::min( a, b ) << std::endl;

	std::cout << a << std::endl;		//  0
	std::cout << ++a << std::endl;		//  0.00390625
	std::cout << a << std::endl;		//  0.00390625
	std::cout << a++ << std::endl;		//  0.00390625
	std::cout << a << std::endl;		//  0.0078125
	std::cout << b << std::endl;		// 10.1016


	return 0;
}
