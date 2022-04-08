/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devleo <devleo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:49:07 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/04 17:24:38 by devleo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Undead awaken.\t\t\t\t["GREEN"Constructor"RESET"]\n";
}

Zombie::~Zombie()
{
	std::cout << "Undead "MAGENTA << name << RESET" has finally found rest. \t["RED"Destructor"RESET"]\n";
}

void Zombie::setName( std::string name )
{
	this->name = name;
}

void Zombie::announce(void)
{
	//Don't print the angle brackets < and >
	std::cout << MAGENTA << name << RESET" : BraiiiiiiinnnzzzZ...\n";
}
