/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:44:49 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/18 21:22:12 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	idx = 0;
	cnt = 0;
	std::cout << "=== PhoneBook 1980 ===\n";
	std::cout << "Available Command is ["GREEN"ADD"RESET"], ["GREEN"SEARCH"RESET"], ["GREEN"EXIT"RESET"]\n";
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "=== BYE BYE ===\n";
}

static bool	is_number(std::string str)
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

	std::cout << GREEN"@index>"RESET;
	std::string str;
	std::getline(std::cin, str);
	input_index = atoi(str.c_str());
	if (is_number(str) == true && input_index < cnt && input_index >= 0)
		contact[input_index].PrintDetail();
	else
		std::cout << YELLOW"[Error]"RESET" Wrong Index!\n";

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
