/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 00:33:41 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/13 02:25:14 by jisokang         ###   ########.fr       */
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
		<< YELLOW"[DEBUG]:" RESET
		<< " I love having extra bacon for my"
		<< " 7XL-double-cheese-triple-pickle-special-ketchup burger."
		<< " I really do!\n";
}

void Harl::info( void )
{
	std::cout
		<< YELLOW"[INFO]:" RESET
		<<" I cannot believe adding extra bacon costs more money."
		<<" You didn’t put enough bacon in my burger!"
		<<" If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning( void )
{
	std::cout
		<< YELLOW"[WARNING]:" RESET
		<<" I think I deserve to have some extra bacon for free."
		<<" I’ve been coming for years whereas you started working here since last month.\n";

}

void Harl::error( void )
{
	std::cout
		<< YELLOW"[ERROR]: " RESET
		<< "This is unacceptable! I want to speak to the manager now.\n";

}

void Harl::complain( std::string level )
{
	void		(Harl::*f[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string	box[4] = { "debug", "info", "warning", "error" };

	for (int i = 0; i < 4; i++)
	{
		if(level == box[i])
			(this->*(f[i]))();
	}
}

Harl::~Harl()
{
}
