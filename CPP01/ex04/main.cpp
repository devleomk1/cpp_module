/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:29:47 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/17 15:48:28 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>		//파일 입출력
#include <iostream>
#include "Replace.hpp"
#include "color.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << YELLOW"Usage: replace [filename] [s1] [s2]\n"RESET;
		return (EXIT_SUCCESS);
	}
	std::ifstream file(argv[1]);
	std::string str;

	if (file.is_open())
	{
		while (file)
		{
			getline(file, str);
			Replace(str, argv[2], argv[3]);
			std::cout << str << std::endl;
		}
		file.close();

	}
	else
		std::cout << YELLOW"Wrong Filename: File dose not exist\n"RESET;

	return (EXIT_SUCCESS);
}
