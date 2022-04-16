/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:29:47 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/16 23:09:17 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>		//파일 입출력
#include <iostream>
#include "color.hpp"

std::string::size_type replace(std::string &str, std::string s1, std::string s2, std::string::size_type &n)
{
	n = str.find(s1, n);
	if (n != std::string::npos)
	{
		str.erase(n, s1.length());
		str.insert(n, s2);
		n += s1.length();
		n = replace(str, s1, s2, n);
		// std::cout << str << std::endl;
	}
	return(n);
}
//재귀로 풀면 안됨!

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << YELLOW"Usage: replace [filename] [s1] [s2]\n"RESET;
		return (EXIT_SUCCESS);
	}

	std::ifstream in(argv[1]);
	std::string str;
	const std::string s1 = argv[2];
	const std::string s2 = argv[3];
	std::string::size_type n = 0;

	if (in.is_open())
	{
		while (in)
		{
			n = 0;
			getline(in, str);
			n = replace(str, s1, s2, n);
			std::cout << str << std::endl;
		}
	}
	else
		std::cout << YELLOW"Wrong Filename: File dose not exist\n"RESET;

	return (EXIT_SUCCESS);
}
