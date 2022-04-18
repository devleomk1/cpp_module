/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:42:29 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/18 17:29:54 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace()
{

}

void Replace::start( const std::string text_file, const std::string s1, const std::string s2 )
{
	std::ifstream	file_in(text_file, std::ios::in);
	std::ofstream	file_out(text_file + ".replace", std::ios::out | std::ios::trunc);
	std::string		str;

	if (file_in.is_open())
	{
		while (file_in)
		{
			getline(file_in, str);
			std::string::size_type n = str.find(s1, 0);
			while (n != std::string::npos)
			{
				str.erase(n, s1.length());
				str.insert(n, s2);
				n += s2.length();
				n = str.find(s1, n);
			}
			std::cout << str << "\n";
			if (file_out.is_open())
			{
				file_out << str + "\n";
			}
		}
	}
	else
		std::cout << YELLOW"Wro ng Filename: File dose not exist\n"RESET;
}

Replace::~Replace()
{
}
