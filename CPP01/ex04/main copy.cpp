/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:29:47 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/11 04:21:29 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>		//파일 입출력
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << YELLO << "usage: replace [filename] [s1] [s2]\n";
		return (EXIT_SUCCESS);
	}
	std::ifstream in(argv[1]);
	//
	return (EXIT_SUCCESS);
}
