/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:27 by jisokang          #+#    #+#             */
/*   Updated: 2022/09/19 21:08:41 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP
# define CLAPTRAP_CPP

# include <iostream>
# include <iomanip>      // std::setw
# include "color.hpp"

# define CLAP_DF_NAME	"NONAME"
# define CLAP_HP		10
# define CLAP_EP		10
# define CLAP_AD		0
# define CLAP_MAX_HP	1000

class ClapTrap
{
private:
	std::string		name;
	unsigned int	hp;							//Hit point
	unsigned int	ep;							//Energy point
	unsigned int	ad;							//Attaack damage

public:
	ClapTrap( void );								//Default constructor
	ClapTrap( std::string name );					//Name constructor
	ClapTrap( const ClapTrap &src );				//Copy constructor
	ClapTrap &operator=( const ClapTrap &src );		//Copy Asginment operator
	~ClapTrap();									//Destructor

	//Add the following public member functions so the ClapTrap looks more realistic:
	void	attack( const std::string &target );	//ClapTrap Attack target
	void	takeDamage( unsigned int amount );		//ClapTrap take Damege
	void	beRepaired( unsigned int amount );
	void	setAd( unsigned int amount );
	void	printStatus( void );
};

#endif
