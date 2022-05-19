/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 23:56:22 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/19 13:36:57 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	_hp = FRAG_HP;
	_ep = FRAG_EP;
	_ad = FRAG_AD;
	std::cout
		<< "[FragTrap]: FRRRAG! IN\t\t\t[Child " GREEN "Constructor" RESET "]"
		<< std::endl;
}

//부모가 있어야만 자식을 만들 수 있어!
FragTrap::FragTrap( std::string name) : ClapTrap(name)
{
	_hp = FRAG_HP;
	_ep = FRAG_EP;
	_ad = FRAG_AD;
	std::cout
		<< "[FragTrap]: FRRRAG! IN\t\t\t[Child " GREEN "Constructor" RESET "]"
		<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout
		<< "[FragTrap]: Scav! OUT\t\t\t[Child " RED "Destructor" RESET "]"
		<< std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &src )
{
	std::cout << YELLOW "Copy" RESET " assignment operator called" << std::endl;
	_name = src._name;
	_hp = src._hp;
	_ep = src._ep;
	_ad = src._ad;

	return (*this);
}

FragTrap::FragTrap( const FragTrap &src )
{
	std::cout << YELLOW "Copy" RESET " constructor called" << std::endl;
	*this = src;
}

void FragTrap::highFivesGuys()
{
	std::cout
		<< MAGENTA 
		<< _name << RESET " HIGH FIVE GUYS!!!!!!!!!!"
		<< std::endl;
	
}