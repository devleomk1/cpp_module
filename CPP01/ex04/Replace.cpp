/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:42:29 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/18 18:33:01 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace()
{

}

void Replace::start( const std::string text_file, const std::string s1, const std::string s2 )
{
	std::ifstream	file_in(text_file, std::ios::in);
	std::string		str;

	if ( text_file.empty() || s1.empty())
		return;
	if (file_in.is_open())
	{
		std::ofstream	file_out(text_file + ".replace", std::ios::out | std::ios::trunc);
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
			if (file_out.is_open() && !file_in.eof())
			{
				file_out << str + "\n";
			}
		}
		file_in.close();
		file_out.close();
	}
	else
		std::cout << YELLOW"Wrong Filename: "RESET"File [" << text_file << "] dose not exist\n";
}

Replace::~Replace()
{
}
