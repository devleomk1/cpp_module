/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 03:21:58 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/29 09:42:09 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include "color.hpp"

class Convert
{

	private:
		const std::string	_input;
		Convert( void );
	public:
		Convert( const std::string &input );
		Convert( Convert const & src );
		Convert &operator=( Convert const & rhs );
		~Convert( void );

		char toChar( double );
		int toInt( double );
		float toFloat( double );
		double toDouble( double );

		const std::string &getInput( void ) const;
};

std::ostream &operator<<( std::ostream & o, Convert const & i );

#endif /* ********************************************************* CONVERT_H */
