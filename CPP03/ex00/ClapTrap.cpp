/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:24 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/14 20:14:21 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout
		<< "AAAAAAAAAnd Helloooooo!\t\t [" GREEN "Constructor" RESET "]"
		<< std::endl;
}

ClapTrap::ClapTrap( std::string name) : _name(name), _hp(DEFUALT_HP), _ep(DEFUALT_EP), _ad(DEFUALT_AD)
{
	std::cout
		<< "AAAAAAAAAnd Helloooooo!\t\t [" GREEN "Constructor" RESET "]"
		<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout
		<< "AAAAAAAAAnd Gooooodbye!\t\t [" RED "Destructor" RESET "]"
		<< std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &f)
{
	std::cout << YELLOW "Copy" RESET " assignment operator called" << std::endl;
	_name = f._name;
	_hp = f._hp;
	_ep = f._ep;
	_ad = f._ad;

	return (*this);
}

void ClapTrap::attack( const std::string &target )
{
	if (_hp == 0)
	{
		std::cout
			<< "ClapTrap " MAGENTA
			<< _name << RESET " doesn't have HP to fight."
			<< std::endl;
		return ;
	}

	if (_ep == 0)
	{
		std::cout
			<< "ClapTrap "  MAGENTA 
			<< _name << RESET " not enough EP!"
			<< std::endl;
		return ;
	}
	
	_ep--;
	std::cout
		<< "ClapTrap " MAGENTA 
		<< _name << RESET " attacks " YELLOW 
		<< target << RESET ", causing " 
		<< _ad << " points of damage!" 
		<< std::endl;

}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (_hp == 0)
	{
		std::cout
			<< "ClapTrap " MAGENTA 
			<< _name << RESET " already " RED "HP 0" RESET
			<< std::endl;
		return ;
	}

	if (_hp <= amount)
		_hp = 0;
	else
		_hp -= amount;
	
	std::cout
		<< "ClapTrap " MAGENTA
		<< _name << RESET " take damage!! \t[" RED "HP -" << amount << RESET "]"
		<< std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (_hp == 0)
	{
		std::cout
			<< "ClapTrap " MAGENTA
			<< _name << RESET " doesn't have HP to fight."
			<< std::endl;
		return ;
	}

	if (_ep == 0)
	{
		std::cout
			<< "ClapTrap " MAGENTA 
			<< _name << RESET " not enough EP!"
			<< std::endl;
		return ;
	}
	
	if (_hp + amount >= MAX_HP || amount == __UINT32_MAX__)
		_hp = MAX_HP;
	else
		_hp += amount;

	std::cout 
		<< "ClapTrap " MAGENTA
		<< _name << RESET 
		<< " repaired!\t[" GREEN "HP +"<< amount << RESET "]" << std::endl;
}

void ClapTrap::setAd( unsigned int amount )
{
	_ad = amount;
	std::cout << "ClapTrap " << _name << " set weapon!\t[" YELLOW "AD " << amount << RESET "]" << std::endl;
}

void ClapTrap::printStatus ( void )
{
	std::cout << "┌─────────────────────┐\n";
	std::cout << "│" << std::setw(10) << MAGENTA << _name << RESET "'s STATUS│\n";
	std::cout << "├──────────┬──────────┤\n";
	std::cout << "│" << std::setw(10) << "HP" << "│" << std::setw(10) << _hp << "│\n";
	std::cout << "│" << std::setw(10) << "EP" << "│" << std::setw(10) << _ep << "│\n";
	std::cout << "│" << std::setw(10) << "AD" << "│" << std::setw(10) << _ad << "│\n";
	std::cout << "└──────────┴──────────┘\n";
}