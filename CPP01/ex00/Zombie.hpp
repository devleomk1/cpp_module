/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:49:10 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/22 22:30:06 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	~Zombie();
	void announce(void);
	void setName( std::string name );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif
