/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:46:11 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/10 19:03:44 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string new_name ) : name(new_name)
{
}

void HumanB::setWeapon( Weapon &new_weapon_type )
{
	this->weapon_type = &new_weapon_type;
}

void HumanB::attack()
{
	std::cout << GREEN << this->name << RESET << " attacks with their " << this->weapon_type->getType() << std::endl;
}

HumanB::~HumanB()
{
}
