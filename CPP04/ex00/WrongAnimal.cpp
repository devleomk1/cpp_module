/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:04:57 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/15 04:16:48 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ( void ) : type("WrongAnimal")
{
    std::cout
		<< "[WrongAnimail]: \t[" GREEN "Constructor" RESET "]"
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
		<< "[WrongAnimal]: \t[" RED "Destructor" RESET "]"
		<< std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "[WrongAnimal]: SAY WrongANIMAL SOUND!" << std::endl;
}