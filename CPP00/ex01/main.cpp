/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:43:03 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/06 15:48:27 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	phonebook;

	while (true)
	{
		std::cout << GREEN "@>" RESET;
		std::getline(std::cin, cmd);
		if (cmd == "EXIT" || std::cin.eof())
			return (EXIT_SUCCESS);
		else if (cmd == "ADD")
			phonebook.AddBook();
		else if (cmd == "SEARCH")
			phonebook.SearchBook();
		else
			std::cout << YELLOW "[Error]" RESET " Wrong Command. Available Command is [ADD], [SEARCH], [EXIT]\n";
	}
	return (EXIT_SUCCESS);
}
