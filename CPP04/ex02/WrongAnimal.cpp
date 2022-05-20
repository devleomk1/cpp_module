/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:04:57 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/16 15:08:30 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ( void ) : type("WrongAnimal")
{
    std::cout
		<< "[" GREEN "Constructor" RESET " (WrongAnimal)]"
		<< std::endl;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &src )
{
	std::cout << YELLOW "Copy" RESET " assignment operator called" << std::endl;
	type = src.type;

	return (*this);
}

WrongAnimal::WrongAnimal( const WrongAnimal &src )
{
	std::cout << YELLOW "Copy" RESET " constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout
		<< "[" RED "Destructor" RESET " (WrongAnimal)]"
		<< std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "[WrongAnimal]: WRONG ANIMAL SOUND!" << std::endl;
}