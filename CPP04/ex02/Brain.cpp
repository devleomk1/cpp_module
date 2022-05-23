/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:21:50 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/16 15:08:30 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain ( void )
{
    std::cout
		<< "[" GREEN "Constructor" RESET " (Brain)]"
		<< std::endl;
	SetBrain("Think");
}

Brain::Brain ( const std::string think )
{
    std::cout
		<< "[" GREEN "Constructor" RESET " (Brain)]"
		<< std::endl;
	SetBrain(think);
}

Brain &Brain::operator=( const Brain &src )
{
	std::cout << YELLOW "Copy" RESET " assignment operator called" << std::endl;
	for (size_t i = 0; i < IDEA_SIZE; i++)
	{
		ideas[i] = src.ideas[i];
	}
	return (*this);
}

Brain::Brain( const Brain &src )
{
	std::cout << YELLOW "Copy" RESET " constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout
		<< "[" RED "Destructor" RESET " (Brain)]"
		<< std::endl;
}

void Brain::SetIdea( const size_t i, const std::string str )
{
	ideas[i] = str;
}

void Brain::SetBrain( const std::string str )
{
	for (size_t i = 0; i < IDEA_SIZE; i++)
	{
		SetIdea(i, str);
	}
}

std::string Brain::getIdea( const size_t i )
{
	return (this->ideas[i]);
}
