/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 01:32:46 by jisokang          #+#    #+#             */
/*   Updated: 2022/01/25 16:30:56 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void PhoneBook::add_book(void)
{
	std::cin.ignore();
	//
	std::cout << "First Name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Last Name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Nick Name: ";
	std::getline(std::cin, this->nick_name);
	std::cout << "Phone Num: ";
	std::getline(std::cin, this->phone_num);
	std::cout << "Secret: ";
	std::getline(std::cin, this->secret);
}

void PhoneBook::print_book(void)
{
	std::cout << std::setw(10);
	// std::cout << "1234567890|1234567890|1234567890|1234567890\n";
	std::cout << first_name << "|" << last_name << "|" << nick_name << "|" << phone_num << "\n";
}
