/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:39:10 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/30 12:08:14 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Data::Data( void ) : _value(DF_VAL), _str(DF_STR)
{
}

Data::Data(const unsigned int value, const std::string str ) : _value(value), _str(str)
{
}

Data::Data( const Data & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Data::~Data()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Data &Data::operator=( Data const & rhs )
{
	if ( this != &rhs )
	{
		this->_value = rhs.getValue();
		this->_value = rhs.getValue();
	}
	return *this;
}

std::ostream &operator<<( std::ostream & o, Data const & i )
{
	o << "Value  = " << i.getValue() << "\n";
	o << "String = " << i.getStr() << "\n";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const unsigned int	&Data::getValue() const
{
	return (this->_value);
}

const std::string	&Data::getStr() const
{
	return (this->_str);
}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

/* ************************************************************************** */
