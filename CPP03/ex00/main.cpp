/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:30 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/19 12:44:01 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap c( "CL4P-TP1" );
	c.printStatus();
	
	c.attack( "Psycho" );
	c.printStatus();

	c.takeDamage( 1 );
	c.printStatus();
	
	c.beRepaired( 5 );
	c.printStatus();
	
	for (size_t i = 0; i < 10; i++)
		c.attack( "BADASS Psyco" );
	c.printStatus();
	

	c.takeDamage( 10 );
	c.printStatus();
	
	c.takeDamage( 5 );

	return 0;
}
