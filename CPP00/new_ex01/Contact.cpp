/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:35:44 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/11 16:28:44 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::AddContact(int i)
{
	idx = i;
	std::cout << "First Name : ";
	std::getline(std::cin, first_name);
	std::cout << "Last Name : ";
	std::getline(std::cin, last_name);
	std::cout << "Nick Name : ";
	std::getline(std::cin, nick_name);
	std::cout << "Phone Num : ";
	std::getline(std::cin, phone_num);
	std::cout << "SECRET : ";
	std::getline(std::cin, secret);
}

void Contact::StringShortener(std::string str, int max_len)
{
	if (str.length() > max_len)
		std::cout << str.substr(0, max_len - 1) << ".│";
	else
		std::cout << std::setw(10) << str << "│";
}

void Contact::PrintOneline(void)
{
	std::cout << "│" << std::setw(10) << idx << "│";
	StringShortener(first_name, 10);
	StringShortener(last_name, 10);
	StringShortener(nick_name, 10);
	std::cout << "\n";
}
