/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devleo <devleo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:34:31 by devleo            #+#    #+#             */
/*   Updated: 2022/04/10 15:00:13 by devleo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string new_type) : type(new_type)
{
}

const std::string &Weapon::getType()
{
    return(this->type);
}

void Weapon::setType(std::string new_type)
{
    this->type = new_type;
    std::cout << this->getType() << " setTypes\n";
}

Weapon::~Weapon()
{
}
