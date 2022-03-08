/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:44:46 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/08 22:11:15 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class PhoneBook
{
private:

public:
	PhoneBook();
	~PhoneBook();
};

PhoneBook::PhoneBook()
{
	std::cout << "=== PhoneBook 1980 ===\n";
}

PhoneBook::~PhoneBook()
{
}
