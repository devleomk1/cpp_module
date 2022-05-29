/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:39:07 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/29 11:52:58 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{

	private:
		int	_value;
	public:
		Data( void );
		Data( Data const & src );
		Data &operator=( Data const & rhs );
		~Data( void );

	const int &getValue( void ) const;
};
std::ostream &operator<<( std::ostream & o, Data const & i );

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif /* ************************************************************ DATA_H */
