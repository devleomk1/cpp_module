/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:49:07 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/23 19:05:13 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* 생성자 초기화 리스트 */
Zombie::Zombie( std::string name ): name( name ) 
{
	std::cout << "Undead "MAGENTA << name << RESET" awaken.\t\t\t["GREEN"Constructor"RESET"]\n";
}

Zombie::~Zombie()
{
	std::cout << "Undead "MAGENTA << name << RESET" has finally found rest. \t["RED"Destructor"RESET"]\n";
}

void Zombie::announce(void)
{
	//Don't print the angle brackets < and >
	std::cout << MAGENTA << name << RESET" : BraiiiiiiinnnzzzZ...\n";
}
