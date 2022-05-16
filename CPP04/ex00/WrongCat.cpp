/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:19:58 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/16 15:04:04 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat ( void )
{
    type = "WrongCat";
    std::cout
		<< "[" GREEN "Constructor" RESET " (WrongCat)]"
		<< std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &src )
{
	std::cout << YELLOW "Copy" RESET " assignment operator called" << std::endl;
	type = src.type;

	return (*this);
}

WrongCat::WrongCat( const WrongCat &src )
{
	std::cout << YELLOW "Copy" RESET " constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout
		<< "[" RED "Destructor" RESET " (WrongCat)]"
		<< std::endl;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "[WrongCat]: 🐈 야옹야옹!" << std::endl;
}