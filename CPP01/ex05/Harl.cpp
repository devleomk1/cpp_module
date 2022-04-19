/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 00:33:41 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/19 22:37:44 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// The goal of this exercise is to use pointers to member functions.
// This is not a suggestion.

Harl::Harl()
{
}

void Harl::debug( void )
{
	std::cout
		<< "[DEBUG]: "
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info( void )
{

}

void Harl::warning( void )
{

}

void Harl::error( void )
{

}

Harl::~Harl()
{
}
