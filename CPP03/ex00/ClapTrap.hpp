/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:27 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/09 21:04:42 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP
# define CLAPTRAP_CPP

# include <iostream>

# define DEFUALT_HP		10
# define DEFUALT_EP		10
# define DEFUALT_AD		0

class ClapTrap
{
private:
    std::string		_name;
	unsigned int	_hp;		//Hit point
	unsigned int	_ep;		//Energy point
	unsigned int	_ad;		//Attaack damage
	
public:
    ClapTrap( void );							//Default constructor
    ClapTrap( std::string name );				//Name constructor
	ClapTrap( const ClapTrap &f );				//Copy constructor
	ClapTrap &operator=(const ClapTrap &f);		//Copy Asginment operator
	~ClapTrap();								//Destructor

	//Add the following public member functions so the ClapTrap looks more realistic:
	void	attack( const std::string &target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
};

#endif