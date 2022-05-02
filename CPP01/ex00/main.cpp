/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:48:55 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/02 18:02:55 by jisokang         ###   ########.fr       */
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
