/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:42:42 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/22 22:26:56 by jisokang         ###   ########.fr       */
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
	if (this != &src)
	{
		type = src.getType();
		*(this->brain) = *(src.getBrain());
	}
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

const Brain *Cat::getBrain() const
{
	if (this->brain)
		return(this->brain);
	return (NULL);
}

void Cat::setBrainWashing( const std::string str)
{
	std::cout << "Brainwashing... 👉 [" << str << "]" << std::endl;
	this->brain->SetBrain(str);
}

void Cat::printBrain( void ) const
{
	std::cout << "[" YELLOW "Print Brain" RESET "]" << std::endl;
	for (size_t i = 0; i < IDEA_SIZE; i++)
	{
		std::cout << "["<< this->brain->getIdea(i) << "]";
	}
	std::cout << std::endl;

}
