/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:49:04 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/20 17:04:59 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
	// Zombie	*zombie;

	std::cout << "randomChump IN\n";
	newZombie(name)->announce();
	std::cout << "randomChump IN\n";
}
