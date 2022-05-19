/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:03:39 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/19 13:19:26 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	_hp = SCAV_HP;
	_ep = SCAV_EP;
	_ad = SCAV_AD;
	std::cout
		<< "[ScavTrap]: Scav! IN\t\t\t[Child " GREEN "Constructor" RESET "]"
		<< std::endl;
}

//부모가 있어야만 자식을 만들 수 있어!
ScavTrap::ScavTrap( std::string name) : ClapTrap(name)
{
	_hp = SCAV_HP;
	_ep = SCAV_EP;
	_ad = SCAV_AD;
	std::cout
		<< "[ScavTrap]: Scav! IN\t\t\t[Child " GREEN "Constructor" RESET "]"
		<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout
		<< "[ScavTrap]: Scav! OUT\t\t\t[Child " RED "Destructor" RESET "]"
		<< std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &src )
{
	std::cout << YELLOW "Copy" RESET " assignment operator called" << std::endl;
	_name = src._name;
	_hp = src._hp;
	_ep = src._ep;
	_ad = src._ad;

	return (*this);
}

ScavTrap::ScavTrap( const ScavTrap &src )
{
	std::cout << YELLOW "Copy" RESET " constructor called" << std::endl;
	*this = src;
}

void ScavTrap::guardGate()
{
	std::cout << MAGENTA << _name << RESET " 게이트 키퍼 모드 ON!" << std::endl;
	
}
