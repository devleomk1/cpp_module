/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:42:12 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/18 00:57:00 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include "color.hpp"
# include <iostream>
# include <fstream>
# include <string>

class Replace
{
private:
	/* data */
public:
	Replace();
	void start( const std::string text_file, const std::string s1, const std::string s2 );
	~Replace();
};

#endif
