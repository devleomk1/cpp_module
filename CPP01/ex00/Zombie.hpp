/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:49:10 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/02 18:03:15 by jisokang         ###   ########.fr       */
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
	Zombie();
	~Zombie();
	void setName( std::string name );
	void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif
