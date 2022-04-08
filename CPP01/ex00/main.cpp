/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devleo <devleo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:48:55 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/04 17:19:48 by devleo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	z0;
	z0.setName("Tom");
	z0.announce();
	
	Zombie	*z1;
	z1 = newZombie("Max");
	z1->announce();
	delete z1;

	Zombie	z3;

	randomChump("Harry");

	return (EXIT_SUCCESS);
}
