/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:59:40 by jisokang          #+#    #+#             */
/*   Updated: 2022/01/26 22:47:18 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip> //for std::setw()
#include <string>
#include "color.hpp"

class PhoneBook
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_num;
	std::string	secret;

public:
	PhoneBook(void);
	~PhoneBook(void);
	void add_book(void);
	void print_book(int index);
	void print_book_detail(void);
};
