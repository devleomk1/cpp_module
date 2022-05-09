/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:24 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/09 21:03:47 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
}

ClapTrap::ClapTrap( std::string name) : _name(name), _hp(DEFUALT_HP), _ep(DEFUALT_EP), _ad(DEFUALT_AD)
{
    
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack( const std::string &target )
{
    if (this->_ep < 1)
    {
        std::cout << "ClapTrap " << this->_name << " No EP!\n";
        return ;
    }
    
}

void ClapTrap::takeDamage( unsigned int amount )
{

}
void ClapTrap::beRepaired( unsigned int amount )
{

}