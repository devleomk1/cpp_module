/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 00:33:44 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/19 00:40:31 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
private:
	//You have to create a Harl class with the following private member functions:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Harl(/* args */);
	void complain( std::string level );
	~Harl();
};

#endif
