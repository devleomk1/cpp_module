/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:48:55 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/23 20:09:02 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		n = 10;
	Zombie	*horde = zombieHorde(n, "Kim");

	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return (EXIT_SUCCESS);
}
