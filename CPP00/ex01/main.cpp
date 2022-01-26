/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:37:40 by jisokang          #+#    #+#             */
/*   Updated: 2022/01/26 22:53:02 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	is_number(std::string str)
{
	if (atoi(str.c_str()) != 0 || str.compare("0") == 0)
		return (true);
	return (false);
}

int	main(void)
{
	std::string	command;
	int			cnt = 0;
	int			j = 0;
	int			i = 0;
	int			input_index;
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
			if (i >= 8)
				i = 0;
			phonebook[i].add_book();
			i++;
			if (cnt < 8)
				cnt++;
		}
		else if (command.compare("SEARCH") == 0)
		{
			std::cout << "|"
				<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nick Name" << "|\n";
			j = 0;
			while (j < cnt - 1)
			{
				phonebook[j].print_book(j);
				j++;
			}
			std::cout << "Index num :";
			std::cin >> command;
			input_index = atoi(command.c_str());
			if (is_number(command) == true && 0 <= input_index && input_index <= cnt)
			{
				phonebook[input_index].print_book_detail();
			}
			else
				std::cout << YELLOW"ERROR Wrong index\n"RESET;
		}
		else
			std::cout << YELLOW"ERROR Wrong Command\n"RESET;
	}
	return (0);
}
