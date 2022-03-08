/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:38:01 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/08 20:43:06 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (size_t i = 1; i < argc; i++)
			for (size_t j = 0; j< strlen(argv[i]); j++)
				std::cout << (char)std::toupper(argv[i][j]);
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
