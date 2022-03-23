/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:49:10 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/23 19:57:18 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include "color.hpp"

class Zombie
{
private:
	std::string	name;
public:
	// Zombie( std::string	name );
	Zombie();
	~Zombie();
	void setName( std::string name );
	void announce(void);
};

Zombie* zombieHorde( int N, std::string name );


#endif
