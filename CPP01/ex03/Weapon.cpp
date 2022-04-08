/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devleo <devleo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:34:31 by devleo            #+#    #+#             */
/*   Updated: 2022/04/04 18:03:09 by devleo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string new_type)
{
    this->setType(new_type);
}

const std::string *Weapon::getType()
{
    return(&this->type);
}

void Weapon::setType(std::string new_type)
{
    this->type = new_type;
}

Weapon::~Weapon()
{
}
