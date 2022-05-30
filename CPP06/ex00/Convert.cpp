/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 03:25:43 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/30 11:06:16 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert( void ) : _input(NULL), _value(0.0)
{
}

Convert::Convert( const std::string &input ) : _input(input), _value(std::stod(_input))
{

}

Convert::Convert( const Convert & src ) : _value(std::stod(_input))
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

const double &Convert::getValue( void ) const
{
	return(this->_value);
}


/*
** --------------------------------- toType ---------------------------------
*/

char Convert::toChar( void )
{
	return (static_cast<char>(_value));
}

int Convert::toInt( void )
{
	return (static_cast<int>(_value));
}

float Convert::toFloat( void )
{
	return (static_cast<float>(_value));
}

double Convert::toDouble( void )
{
	return (static_cast<double>(_value));
}

/*
** --------------------------------- printType ---------------------------------
*/

void	Convert::printChar()
{
	std::cout << "char: ";
	if( std::isnan(getValue()) || std::isinf(getValue()) )
	{
		std::cout << "impossible" << std::endl;
	}
	else if(!std::isprint(toChar()))
	{
		std::cout << "Non displayable" << std::endl;
	}
	else
	{
		std::cout << "'" << toChar() << "'" << std::endl;
	}
}

void	Convert::printInt()
{
	std::cout << "int: ";
	if( std::isnan(getValue()) || std::isinf(getValue()) )
	{
		std::cout << "impossible" << std::endl;
	}
	else
	{
		std::cout << toInt() << std::endl;
	}
}

void	Convert::printFloat()
{
	std::cout << "float: ";
	if (toFloat() - toInt() == 0)
	{
		std::cout << toFloat() << ".0f" << std::endl;
	}
	else
	{
		std::cout << toFloat() << "f" << std::endl;
	}

}

void	Convert::printDouble()
{
	std::cout << "double: ";
	if (toDouble() - toInt() == 0)
	{
		std::cout << toDouble() << ".0" << std::endl;
	}
	else
	{
		std::cout << toDouble() << std::endl;
	}

}

/* ************************************************************************** */
