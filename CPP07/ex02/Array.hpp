/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:38:47 by jisokang          #+#    #+#             */
/*   Updated: 2022/06/02 12:43:50 by jisokang         ###   ########.fr       */
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
	unsigned int	_size;
public:

	// Default constructor
	Array( void ) : _data(NULL), _size(0) {};

	// Input constructor
	Array( const unsigned int n ) : _data(new T[n]), _size(n) {};

	//Copy constructor
	/* 같은 타입만 받아와야 하니까 <T>를 넣어야 한다. */
	Array( const Array<T> &src ) : _data(NULL), _size(0)
	{
		*this = src;
	};

	//Copy Asginment operator
	Array<T> &operator=( const Array<T> &rhs )
	{
		if ( this != &rhs )
		{
			if (this->_size > 0)
				delete[] _data;
			this->_size = rhs._size;
			this->_data = new T[rhs._size];
			for (size_t i = 0; i < this->_size ; i++)
			{
				this->_data[i] = rhs._data[i];
			}
		}
		return (*this);
	};

	//Destructor
	~Array( void )
	{
		delete[] _data;
	};

	//T &operator[]( const int n ) const
	T &operator[]( const unsigned int n ) const
	{
		if (n < 0 || static_cast<unsigned int>(n) >= this->_size)
		{
			throw WrongIndexException();
		}
		return (this->_data[n]);
	};

	unsigned int size() const
	{
		return (this->_size);
	}

	class WrongIndexException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Wrong Index!");
			}
	};
};

template<typename T>
std::ostream &operator<<(std::ostream &stream, const Array<T> &a)
{
	for (size_t i = 0; i < 10; i++)
	{
		stream << "[" MAGENTA << a[i] << RESET "] ";
	}
	stream << "..." << std::endl;
	return (stream);

};

#endif
