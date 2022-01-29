/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 01:32:46 by jisokang          #+#    #+#             */
/*   Updated: 2022/01/29 22:19:23 by jisokang         ###   ########.fr       */
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

void print_book_col(std::string name)
{
	if (name.length() > 10)
		std::cout << name.substr(0,9) << ".|";
	else
		std::cout << std::setw(10) << name << "|";
}

void PhoneBook::print_book(int index)
{
	std::cout << "|" << std::setw(10) << index << "|";
	print_book_col(this->first_name);
	print_book_col(this->last_name);
	print_book_col(this->nick_name);
	std::cout << "\n";
}

void PhoneBook::print_book_detail(void)
{
	std::cout << "First Name: " << this->first_name << "\n";
	std::cout << "Last Name: " << this->last_name << "\n";
	std::cout << "Nick Name: " << this->nick_name << "\n";
	std::cout << "Phone Num: " << this->phone_num << "\n";
	std::cout << "Secret: " << this->secret << "\n";
}
