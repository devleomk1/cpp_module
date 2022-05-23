/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:21:50 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/23 15:40:15 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal ( void ) : type("Animal")
{
    std::cout
		<< "[" GREEN "Constructor" RESET " (Animal)]"
		<< std::endl;
}

Animal &Animal::operator=( const Animal &src )
{
	std::cout << YELLOW "Copy" RESET " assignment operator called" << std::endl;
	type = src.type;

	return (*this);
}

Animal::Animal( const Animal &src )
{
	std::cout << YELLOW "Copy" RESET " constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout
		<< "[" RED "Destructor" RESET " (Animal)]"
		<< std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound( void ) const
{
	//순수 가상화 함수에서는 절대 사용 되지 않습니다.
	std::cout << "[Animal]: ANIMAL SOUND!" << std::endl;
}
