/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:48:55 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/20 17:00:18 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z0;
	Zombie	*z1;

	z0 = newZombie("Harry");
	z1 = newZombie("Max");
	randomChump("Kim");
	return (0);
}
