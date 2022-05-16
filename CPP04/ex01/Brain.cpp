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
}

Brain &Brain::operator=( const Brain &src )
{
	std::cout << YELLOW "Copy" RESET " assignment operator called" << std::endl;
	for (size_t i = 0; i < 100; i++)
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
