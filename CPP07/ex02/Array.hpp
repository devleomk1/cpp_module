/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:38:47 by jisokang          #+#    #+#             */
/*   Updated: 2022/06/01 16:36:45 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>
# include "color.hpp"


template <typename T>
class Array
{
private:
	T				*_data;
	unsigned int	_len;
public:

	// Default constructor
	Array( void ) : _data(NULL), _len(0) {};

	// Input constructor
	Array( const int n ) : _data(NULL), _len(n) {};

	//Copy constructor
	/* 같은 타입만 받아와야 하니까 <T>를 넣어야 한다. */
	Array( const Array<T> &src ) : _data(NULL), _len(0)
	{
		*this = src;
	};

	//Copy Asginment operator
	Array &operator=( Array const &rhs )
	{
		if ( this != &rhs )
		{
			this->_len = rhs.getLen();
			for (size_t i = 0; i < rhs.getLen() ; i++)
			{
				this->_data[i] = rhs.getData(i);
			}
		}
		return (*this);
	};

	//Destructor
	~Array( void )
	{
		delete[] _data;
	};

	const unsigned int &getLen( void ) const
	{
		return (this->_len);
	};
	T &getData( const int n ) const
	{
		return (this->_data[n]);
	};

	T &operator[]( const int n )
	{
		if (n < 0 || n >= this->getLen())
		{
			throw WrongIndexException();
		}
		return (this->getData(n));
	};

	class WrongIndexException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Wrong Index!");
			}
	};
};

#endif
