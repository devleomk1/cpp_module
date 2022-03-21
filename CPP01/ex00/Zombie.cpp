/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:49:07 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/21 21:19:19 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name(""), x(10)
{
	this->name = "";
}

Zombie::~Zombie()
{
	std::cout << "My Name is " << name << ", Bye Bye\n";
}

void Zombie::setName( std::string name )
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << "<" << name << "> BraiiiiiiinnnzzzZ...\n";
}
