/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 03:21:58 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/30 10:47:03 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cmath>				//isnan(), isinf()
# include <cctype>
# include "color.hpp"

class Convert
{

	private:
		const std::string	_input;
		const double		_value;
		Convert( void );
	public:
		Convert( const std::string &input );
		Convert( Convert const & src );
		Convert &operator=( Convert const & rhs );
		~Convert( void );

		char	toChar( void );
		int		toInt( void );
		float	toFloat( void );
		double	toDouble( void );

		void	printChar( void );
		void	printInt( void );
		void	printFloat( void );
		void	printDouble( void );

		const std::string &getInput( void ) const;
		const double &getValue( void ) const;
};

std::ostream &operator<<( std::ostream & o, Convert const & i );

#endif /* ********************************************************* CONVERT_H */
