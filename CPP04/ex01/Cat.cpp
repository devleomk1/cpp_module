/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:42:42 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/16 16:40:19 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat ( void )
{
    type = "Cat";
	brain = new Brain( "🐟" );
    std::cout
		<< "[" GREEN "Constructor" RESET " (Cat)]"
		<< std::endl;
}

Cat &Cat::operator=( const Cat &src )
{
	std::cout << YELLOW "Copy" RESET " assignment operator called" << std::endl;
	type = src.type;
	brain = src.brain;

	return (*this);
}

Cat::Cat( const Cat &src )
{
	std::cout << YELLOW "Copy" RESET " constructor called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	delete brain;
	std::cout
		<< "[" RED "Destructor" RESET " (Cat)]"
		<< std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << "[Cat]: 🐈 야옹야옹!" << std::endl;
}