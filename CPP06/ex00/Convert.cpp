/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 03:25:43 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/30 07:43:13 by jisokang         ###   ########.fr       */
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
** --------------------------------- GETTER ----------------------------------
*/

const std::string &Convert::getInput( void ) const
{
	return(this->_input);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

char Convert::toChar( const double input )
{
	char	value = static_cast<char>(input);

	if (std::isnan(value) || std::isinf(value) )
	{
		/* code */
	}

	if(std::isprint(value))
		return (value);

	/* 중간 체크 */
}

int Convert::toInt( const double input )
{
	int	value;
	value = static_cast<int>(input);
	/* 중간 체크 */
	return (value);
}

float Convert::toFloat( const double input )
{
	float	value;
	value = static_cast<float>(input);
	/* 중간 체크 */
	return (value);
}

double Convert::toDouble( const double input )
{
	/* only check is inf or nan */
	return (input);
}


/* ************************************************************************** */
