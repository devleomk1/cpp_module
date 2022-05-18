/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:48:55 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/18 14:43:01 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "color.hpp"

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "[" MAGENTA "ADDRESS" RESET "]\n";
	std::cout << "The memory address of the string :\t" << &str << "\n";
	std::cout << "The memory address held by stringPTR :\t" << &stringPTR << "\n";
	std::cout << "The memory address held by stringREF :\t" << &stringREF << "\n";

	std::cout << "==========================================================\n";

	std::cout << "[" CYAN "VALUE" RESET "]\n";
	std::cout << "The value of the string variable :\t" << str << "\n";
	std::cout << "The value pointed to by stringPTR :\t" << stringPTR << "\n";
	std::cout << "The value pointed to by stringREF :\t" << stringREF << "\n";

	return (EXIT_SUCCESS);
}
