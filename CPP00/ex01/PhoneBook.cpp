/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 01:32:46 by jisokang          #+#    #+#             */
/*   Updated: 2022/01/22 22:53:19 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_book(void)
{
	std::cin.ignore();
	std::cout << "First Name: ";
	// std::cin >> this->first_name;
	std::getline(std::cin, this->first_name);
	std::cout << "Last Name: ";
	// std::cin >> this->last_name;
	std::getline(std::cin, this->last_name);
}

void PhoneBook::print_book(void)
{
	std::cout << first_name << "\n";
}
