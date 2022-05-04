/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:46:11 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/04 20:50:30 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string new_name ) : name(new_name), weapon_type(NULL)
{
	
}

void HumanB::setWeapon( Weapon &new_weapon_type )
{
	this->weapon_type = &new_weapon_type;
}

void HumanB::attack()
{

	std::cout << MAGENTA << this->name << RESET << " attacks with their " CYAN;
	if (this->weapon_type != NULL)
		std::cout <<  this->weapon_type->getType() << RESET << std::endl;
	else
		std::cout << "No Weapon" << RESET << std::endl;
}

HumanB::~HumanB()
{
}
