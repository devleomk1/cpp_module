/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 03:25:43 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/29 16:15:27 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert( void )
{
}

Convert::Convert( const std::string &input ) : _input(input)
{
	try
	{
		double	value = std::stod(input);

	}
	catch(const std::exception& e)
	{
		std::cerr << "[🚨Exception]: " YELLOW << e.what() << RESET "\n";
	}
}

Convert::Convert( const Convert & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Convert::~Convert()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Convert &Convert::operator=( Convert const & rhs )
{
	if ( this != &rhs )
	{
		return *this;
	}
	return *this;
}

std::ostream &operator<<( std::ostream & stream, Convert const & i )
{
	stream << "Value = " << i.getInput();
	return stream;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const std::string &Convert::getInput( void ) const
{
	return(this->_input);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
