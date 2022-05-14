/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:30 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/14 22:34:45 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap a;
	a.printStatus();

	ClapTrap c( "CL4P-TP1" );
	c.printStatus();

	ClapTrap d( c );
	d.printStatus();

	
	c.attack( "Psycho" );
	c.printStatus();

	c.setAd( 3 );
	c.attack( "Psycho" );
	c.printStatus();
	
	c.takeDamage( 4294967295 );
	c.printStatus();

	c.beRepaired( 4294967295 );
	c.printStatus();

	c.takeDamage( 10 );
	c.printStatus();
	
	c.takeDamage( 5 );

	return 0;
}
