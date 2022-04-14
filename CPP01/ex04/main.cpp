/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:29:47 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/14 23:41:01 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>		//파일 입출력
#include <iostream>
#include "color.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << YELLOW"Usage: replace [filename] [s1] [s2]\n"RESET;
		return (EXIT_SUCCESS);
	}

	std::ifstream in(argv[1]);
	std::string str;

	if (in.is_open())
	{
		while (in)
		{
			getline(in, str);
			std::cout << str << std::endl;
		}
	}
	else
		std::cout << YELLOW"Wrong Filename: File dose not exist\n"RESET;

	return (EXIT_SUCCESS);
}
