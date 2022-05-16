/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 03:58:37 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/16 14:34:35 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ( void )
{
    type = "Dog";
    std::cout
		<< "[Dog]: \t\t[" GREEN "Constructor" RESET "]"
		<< std::endl;
}

Dog &Dog::operator=( const Dog &src )
{
	std::cout << YELLOW "Copy" RESET " assignment operator called" << std::endl;
	type = src.type;

	return (*this);
}

Dog::Dog( const Dog &src )
{
	std::cout << YELLOW "Copy" RESET " constructor called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout
		<< "[Dog]: \t\t[" RED "Destructor" RESET "]"
		<< std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "[Dog]: 🐕 왈왈왈왈!" << std::endl;
}