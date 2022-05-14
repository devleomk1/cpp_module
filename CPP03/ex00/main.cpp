/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:30 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/14 18:22:29 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap c( "CL4P-TP" );

	c.printStatus();
	c.attack( "Psycho" );
	c.takeDamage( 5 );
	c.takeDamage( 5 );
	c.takeDamage( 5 );


	return 0;
}
