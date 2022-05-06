/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:29:47 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/05 22:31:23 by jisokang         ###   ########.fr       */
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
		std::cout << YELLOW "Usage: replace [filename] [s1] [s2]\n" RESET;
		return (EXIT_SUCCESS);
	}
	Replace	replace;
	replace.start(argv[1], argv[2], argv[3]);

	return (EXIT_SUCCESS);
}
