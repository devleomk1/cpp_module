/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:03:36 by jisokang          #+#    #+#             */
/*   Updated: 2022/06/07 09:29:42 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <limits>
# include <exception>
# include <iomanip>
# include "color.hpp"

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_data;
		Span( void );

	public:
		Span( unsigned int N );
		Span( Span const & src );
		~Span( void );
		Span &operator=( Span const & rhs );

		void addNumber( const int num );
		void addNumbers( std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end );
		void fillNumberAll( void );
		void printVector( unsigned int size );

		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );

		class WrongSizeException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class WrongAddNumberException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */
