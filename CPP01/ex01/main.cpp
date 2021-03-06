/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:48:55 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/23 20:18:30 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		num = 10;
	Zombie	*horde = zombieHorde(num, "Kim");

	for (int i = 0; i < num; i++)
		horde[i].announce();
	// delete horde;
	delete[] horde;
	return (EXIT_SUCCESS);
}
