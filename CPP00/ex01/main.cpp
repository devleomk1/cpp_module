/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:37:40 by jisokang          #+#    #+#             */
/*   Updated: 2022/01/22 16:35:41 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	command;
	int			cnt = 0;
	PhoneBook	phonebook[8];

	std::cout << YELLOW"[PhoneBook(1980)]\n"RESET;
	while (true)
	{
		std::cout << ":";
		std::cin >> command;
		if (command.compare("EXIT") == 0)
			exit(0);
		else if (command.compare("ADD") == 0)
		{
			if (cnt == 8)
			{
				std::cout << "clear\n";
				cnt = 0;
			}
			phonebook[cnt].add_book();
			cnt++;
		}
		else if (command.compare("SEARCH") == 0)
		{
			int i = 0;
			while (i < 8)
			{
				phonebook[i++].print_book();
			}

		}
		else
			std::cout << YELLOW"Wrong Command\n"RESET;
	}
	return (0);
}
