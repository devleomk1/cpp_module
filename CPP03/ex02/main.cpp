/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:30 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/19 13:46:37 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	ClapTrap c( "CL4P-TP" );
	c.printStatus();
	ScavTrap s( "SC4V-TR" );
	s.printStatus();
	FragTrap f( "FR4G-TR" );
	f.printStatus();

	std::cout << "--------------------------------------------------------------" << std::endl;

	c.attack("BADASS PSYCO");
	s.attack("BADASS PSYCO");
	f.attack("BADASS PSYCO");

	std::cout << "--------------------------------------------------------------" << std::endl;
	
	c.takeDamage(10);
	s.takeDamage(10);
	f.takeDamage(10);

	std::cout << "--------------------------------------------------------------" << std::endl;

	c.beRepaired(10);
	s.beRepaired(10);
	f.beRepaired(10);
	
	std::cout << "--------------------------------------------------------------" << std::endl;

	c.printStatus();
	s.printStatus();
	f.printStatus();

	std::cout << "--------------------------------------------------------------" << std::endl;

	s.guardGate();
	f.highFivesGuys();

	std::cout << "--------------------------------------------------------------" << std::endl;

	return 0;
}
