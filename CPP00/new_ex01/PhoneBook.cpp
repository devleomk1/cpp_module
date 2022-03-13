/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:44:49 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/12 14:27:43 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	idx = 0;
	cnt = 0;
	std::cout << "=== PhoneBook 1980 ===\n";
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "=== BYE BYE ===\n";
}

bool	is_number(std::string str)
{
	if (atoi(str.c_str()) != 0 || str.compare("0") == 0)
		return (true);
	return (false);
}

void	PhoneBook::AddBook()
{
	std::cout << "[" << idx << "]\n";
	contact[idx].AddContact(idx);
	idx++;
	if (idx >= MAX_PAGE)
		idx = 0;
	if (cnt < MAX_PAGE)
		cnt++;
}

void	PhoneBook::PrintTable(void)
{
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐\n";
	std::cout << "│"
		<< std::setw(10) << "Index" << "│"
		<< std::setw(10) << "First Name" << "│"
		<< std::setw(10) << "Last Name" << "│"
		<< std::setw(10) << "Nick Name" << "│\n";
	std::cout << "├──────────┼──────────┼──────────┼──────────┤\n";
	int	i = 0;
	while (i < cnt)
	{
		contact[i].PrintOneline();
		i++;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘\n";
}

void	PhoneBook::SearchContact(void)
{
	int	input_index = 0;

	std::cout << "Index : ";
	std::string str;
	std::getline(std::cin, str);
	if (!is_number(str))
		std::cout << YELLOW"[Error]"RESET" Wrong !\n";
		input_index = atoi(str.c_str());


}

void	PhoneBook::SearchBook(void)
{
	if (cnt < 1)
	{
		std::cout << YELLOW"[Error]"RESET" PhoneBooks is empty!\n";
		return ;
	}
	PrintTable();
	SearchContact();
}
