/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:24 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/13 21:26:25 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "AAAAAAAAAnd Coooooonstructor!" << std::endl;
}

ClapTrap::ClapTrap( std::string name) : _name(name), _hp(DEFUALT_HP), _ep(DEFUALT_EP), _ad(DEFUALT_AD)
{
	std::cout << "AAAAAAAAAnd Coooooonstructor!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "AAAAAAAAAnd Gooooooodbye!" << std::endl;
}

void ClapTrap::attack( const std::string &target )
{
	if (_hp < 1)
	{
		std::cout << _name << " doesn't have HP to fight." << std::endl;
		return ;
	}

	if (_ep < 1)
	{
		std::cout << "ClapTrap " << _name << " not enough EP!\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << "attacks" << target << ", causing " << _ad << "points of damage!" << std::endl;

}

void ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->_name << " No EP!\n";
}

void ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "ClapTrap " << this->_name << " No EP!\n";
}
