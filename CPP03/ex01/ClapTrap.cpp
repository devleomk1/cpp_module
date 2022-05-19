/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:24 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/19 13:18:47 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name(CLAP_DF_NAME), _hp(CLAP_HP), _ep(CLAP_EP), _ad(CLAP_AD)
{
	std::cout
		<< "[ClapTrap]: AAAAAAAAAnd Helloooooo!\t[" GREEN "Constructor" RESET "]"
		<< std::endl;
}

ClapTrap::ClapTrap( std::string name) : _name(name), _hp(CLAP_HP), _ep(CLAP_EP), _ad(CLAP_AD)
{
	std::cout
		<< "[ClapTrap]: AAAAAAAAAnd Helloooooo!\t[" GREEN "Constructor" RESET "]"
		<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout
		<< "[ClapTrap]: AAAAAAAAAnd Gooooodbye!\t\t [" RED "Destructor" RESET "]"
		<< std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &src )
{
	std::cout << YELLOW "Copy" RESET " constructor called" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << YELLOW "Copy" RESET " assignment operator called" << std::endl;
	_name = src._name;
	_hp = src._hp;
	_ep = src._ep;
	_ad = src._ad;

	return (*this);
}

void ClapTrap::attack( const std::string &target )
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
		<< MAGENTA << _name << RESET "의 공격!, " YELLOW 
		<< target << RESET "은(는) " 
		<< _ad << " 데미지를 받았다." 
		<< std::endl;

}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (_hp == 0)
	{
		std::cout << MAGENTA << _name << RESET "은(는) 이미 쓰러졌다." RED "HP 0" RESET << std::endl;
		return ;
	}

	if (_hp <= amount)
		_hp = 0;
	else
		_hp -= amount;
	
	std::cout << MAGENTA << _name << RESET "은(는) 공격 받았다!! \t[" RED "HP -" << amount << RESET "]" << std::endl;
	if (_hp == 0)
	{
		std::cout << MAGENTA << _name << RESET "은(는) 눈앞이 깜깜해졌다." << std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (_hp == 0)
	{
		std::cout <<  MAGENTA << _name << RESET " 은(는) 이미 쓰러졌다." << std::endl;
		return ;
	}

	if (_ep == 0)
	{
		std::cout <<  MAGENTA << _name << RESET " 은(는) EP가 부족하다." << std::endl;
		return ;
	}
	
	if (_hp + amount >= CLAP_MAX_HP || amount == __UINT32_MAX__)
		_hp = CLAP_MAX_HP;
	else
		_hp += amount;
	_ep--;
	std::cout 
		<< MAGENTA << _name << RESET 
		<< "의 자가수리!\t[" GREEN "HP +"<< amount << RESET "]" << std::endl;
}

void ClapTrap::setAd( unsigned int amount )
{
	_ad = amount;
	std::cout << _name << " set weapon!\t[" YELLOW "AD " << amount << RESET "]" << std::endl;
}

void ClapTrap::printStatus ( void )
{
	std::cout << MAGENTA << _name << RESET "'s STATUS\n";
	std::cout << "┌──────────┬──────────┐\n";
	std::cout << "│" << std::setw(10) << "HP" << "│" << std::setw(10) << _hp << "│\n";
	std::cout << "│" << std::setw(10) << "EP" << "│" << std::setw(10) << _ep << "│\n";
	std::cout << "│" << std::setw(10) << "AD" << "│" << std::setw(10) << _ad << "│\n";
	std::cout << "└──────────┴──────────┘\n";
}