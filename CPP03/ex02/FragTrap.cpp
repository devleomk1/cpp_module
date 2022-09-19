/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 23:56:22 by jisokang          #+#    #+#             */
/*   Updated: 2022/09/19 21:08:41 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	hp = FRAG_HP;
	ep = FRAG_EP;
	ad = FRAG_AD;
	std::cout
		<< "[FragTrap]: FRRRAG! IN\t\t\t[Child " GREEN "Constructor" RESET "]"
		<< std::endl;
}

//부모가 있어야만 자식을 만들 수 있어!
FragTrap::FragTrap( std::string name) : ClapTrap(name)
{
	hp = FRAG_HP;
	ep = FRAG_EP;
	ad = FRAG_AD;
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
	name = src.name;
	hp = src.hp;
	ep = src.ep;
	ad = src.ad;

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
		<< name << RESET " HIGH FIVE GUYS!!!!!!!!!!"
		<< std::endl;

}
