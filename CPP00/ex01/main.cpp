/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:37:40 by jisokang          #+#    #+#             */
/*   Updated: 2022/01/20 02:49:25 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string command;
	std::cout << YELLOW"[PhoneBook(1980)]\n"RESET;
	while (true)
	{
		std::cin >> command;
		if (command.compare("EXIT") == 0)
			exit(0);
		else
			std::cout << YELLOW"Wrong Command\n"RESET;

	}

	return (0);
}
