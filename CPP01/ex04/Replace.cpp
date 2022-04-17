/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:42:29 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/17 15:41:41 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace( std::string &str, const std::string s1, const std::string s2 )
{
	std::string::size_type n = str.find(s1, 0);

	while (n != std::string::npos)
	{
		str.erase(n, s1.length());
		str.insert(n, s2);
		n += s2.length();
		n = str.find(s1, n);
	}
}

void Replace::start( const std::string text_file, const std::string s1, const std::string s2 )
{
	std::ifstream	file_in(text_file);

	if (file_in.is_open())
	{
		/* code */
	}
	else
		std::cout << YELLOW"Wrong Filename: File dose not exist\n"RESET;
}

Replace::~Replace()
{
}
