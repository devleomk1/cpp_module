/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:44:49 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/11 16:10:32 by jisokang         ###   ########.fr       */
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

void	PhoneBook::PrintBook(void)
{

}

void	PhoneBook::SearchBook(void)
{
	if (cnt < 1)
	{
		std::cout << YELLOW"[Error]"RESET" PhoneBooks is empty!\n";
		return ;
	}
	int	i = 0;
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐\n";
	std::cout << "│"
		<< std::setw(10) << "Index" << "│"
		<< std::setw(10) << "First Name" << "│"
		<< std::setw(10) << "Last Name" << "│"
		<< std::setw(10) << "Nick Name" << "│\n";
	std::cout << "├──────────┼──────────┼──────────┼──────────┤\n";
	while (i < cnt)
	{
		contact[i].PrintOneline();
		i++;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘\n";

}
