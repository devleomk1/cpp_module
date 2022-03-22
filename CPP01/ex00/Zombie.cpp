/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:49:07 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/22 23:03:11 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* 생성자 초기화 리스트 */
Zombie::Zombie() : name( name )
{

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
	//Don't print the angle brackets < and >
	std::cout << name << " : BraiiiiiiinnnzzzZ...\n";
}
