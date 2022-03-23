/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:48:55 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/23 19:21:45 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	z0("Tom");
	z0.announce();
	
	Zombie	*z1;
	z1 = newZombie("Max");
	z1->announce();
	delete z1;

	randomChump("Harry");

	return (EXIT_SUCCESS);
}
