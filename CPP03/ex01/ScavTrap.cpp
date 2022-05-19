/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:03:39 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/19 16:24:19 by jisokang         ###   ########.fr       */
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

void ScavTrap::attack( const std::string &target )
{
	if (_hp == 0)
	{
		std::cout << MAGENTA << _name << RESET "은(는) 이미 쓰러졌다." << std::endl;
		return ;
	}

	if (_ep == 0)
	{
		std::cout << MAGENTA << _name << RESET "은(는) EP가 부족하다." << std::endl;
		return ;
	}
	
	_ep--;
	std::cout
		<< MAGENTA << _name << RESET "의 [" BLUE "강도질" RESET "] 공격!, " YELLOW 
		<< target << RESET "은(는) " 
		<< _ad << " 데미지를 받았다." 
		<< std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << MAGENTA << _name << RESET " 게이트 키퍼 모드 ON!" << std::endl;
	
}
