/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:24 by jisokang          #+#    #+#             */
/*   Updated: 2022/09/19 21:08:41 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name(CLAP_DF_NAME), hp(CLAP_HP), ep(CLAP_EP), ad(CLAP_AD)
{
	std::cout
		<< "[ClapTrap]: AAAAAAAAAnd Helloooooo!\t[" GREEN "Constructor" RESET "]"
		<< std::endl;
}

ClapTrap::ClapTrap( std::string name) : name(name), hp(CLAP_HP), ep(CLAP_EP), ad(CLAP_AD)
{
	std::cout
		<< "[ClapTrap]: AAAAAAAAAnd Helloooooo!\t[" GREEN "Constructor" RESET "]"
		<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout
		<< "[ClapTrap]: AAAAAAAAAnd Gooooodbye!\t[" RED "Destructor" RESET "]"
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
	name = src.name;
	hp = src.hp;
	ep = src.ep;
	ad = src.ad;

	return (*this);
}

void ClapTrap::attack( const std::string &target )
{
	if (hp == 0)
	{
		std::cout << MAGENTA << name << RESET "은(는) 이미 쓰러졌다." << std::endl;
		return ;
	}

	if (ep == 0)
	{
		std::cout << MAGENTA << name << RESET "은(는) EP가 부족하다." << std::endl;
		return ;
	}

	ep--;
	std::cout
		<< MAGENTA << name << RESET "의 공격!, " YELLOW
		<< target << RESET "은(는) "
		<< ad << " 데미지를 받았다."
		<< std::endl;

}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (hp == 0)
	{
		std::cout << MAGENTA << name << RESET "은(는) 이미 쓰러졌다." RED "HP 0" RESET << std::endl;
		return ;
	}

	if (hp <= amount)
		hp = 0;
	else
		hp -= amount;

	std::cout << MAGENTA << name << RESET "은(는) 공격 받았다!! \t[" RED "HP -" << amount << RESET "]" << std::endl;
	if (hp == 0)
	{
		std::cout << MAGENTA << name << RESET "은(는) 눈앞이 깜깜해졌다." << std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (hp == 0)
	{
		std::cout <<  MAGENTA << name << RESET " 은(는) 이미 쓰러졌다." << std::endl;
		return ;
	}

	if (ep == 0)
	{
		std::cout <<  MAGENTA << name << RESET " 은(는) EP가 부족하다." << std::endl;
		return ;
	}

	if (hp + amount >= CLAP_MAX_HP || amount == __UINT32_MAX__)
		hp = CLAP_MAX_HP;
	else
		hp += amount;
	ep--;
	std::cout
		<< MAGENTA << name << RESET
		<< "의 자가수리!\t[" GREEN "HP +"<< amount << RESET "]" << std::endl;
}

void ClapTrap::setAd( unsigned int amount )
{
	ad = amount;
	std::cout << name << " set weapon!\t[" YELLOW "AD " << amount << RESET "]" << std::endl;
}

void ClapTrap::printStatus ( void )
{
	std::cout << MAGENTA << name << RESET "'s STATUS\n";
	std::cout << "┌──────────┬──────────┐\n";
	std::cout << "│" << std::setw(10) << "HP" << "│" << std::setw(10) << hp << "│\n";
	std::cout << "│" << std::setw(10) << "EP" << "│" << std::setw(10) << ep << "│\n";
	std::cout << "│" << std::setw(10) << "AD" << "│" << std::setw(10) << ad << "│\n";
	std::cout << "└──────────┴──────────┘\n";
}
