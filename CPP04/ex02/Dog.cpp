/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 03:58:37 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/22 22:27:10 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ( void )
{
    type = "Dog";
	brain = new Brain( "🦴" );
    std::cout
		<< "[" GREEN "Constructor" RESET " (Dog)]"
		<< std::endl;
}

Dog &Dog::operator=( const Dog &src )
{
	std::cout << YELLOW "Copy" RESET " assignment operator called" << std::endl;
	if (this != &src)
	{
		type = src.getType();
		*(this->brain) = *(src.getBrain());
	}
	return (*this);
}

Dog::Dog( const Dog &src )
{
	std::cout << YELLOW "Copy" RESET " constructor called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	delete brain;
	std::cout
		<< "[" RED "Destructor" RESET " (Dog)]"
		<< std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "[Dog]: 🐕 왈왈왈왈!" << std::endl;
}

const Brain *Dog::getBrain() const
{
	if (this->brain)
		return (this->brain);
	return (NULL);
}

void Dog::setBrainWashing( const std::string str)
{
	std::cout << "Brainwashing... 👉 [" << str << "]" << std::endl;
	this->brain->SetBrain(str);
}

void Dog::printBrain( void ) const
{
	std::cout << "[" YELLOW "Print Brain" RESET "]" << std::endl;
	for (size_t i = 0; i < IDEA_SIZE; i++)
	{
		std::cout << "["<< this->brain->getIdea(i) << "]";
	}
	std::cout << std::endl;

}
