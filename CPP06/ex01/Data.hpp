/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:39:07 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/30 14:48:36 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>


# define DF_VAL	0
# define DF_STR	"No Data"

class Data
{
	private:
		unsigned int	_value;
		std::string		_str;

	public:
		Data( void );
		Data( const unsigned int value, const std::string str );
		Data( Data const & src );
		Data &operator=( Data const & rhs );
		~Data( void );

	const unsigned int &getValue( void ) const;
	const std::string &getStr( void ) const;
};
std::ostream &operator<<( std::ostream & o, Data const & i );

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
