/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:50:03 by jisokang          #+#    #+#             */
/*   Updated: 2022/06/01 14:34:00 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main (void)
{
	int a[5] = {0 , 1, 2 , 3, 4};
	char b[10] = {'1', 'q', '2', 'w', '3', 'e', '4', 'r', '!', '@'};
	std::string s[4] = {"Seoul", "New York", "London", "Tokyo"};

	std::cout << "int\t\t" BLUE "a" RESET "[]: ";
	iter(a, 5, printElement);

	std::cout << "char\t\t" BLUE "b" RESET "[]: ";
	iter(b, 10, printElement);

	std::cout << "std::string\t" BLUE "s" RESET "[]: ";
	iter(s, 4, printElement);

}
