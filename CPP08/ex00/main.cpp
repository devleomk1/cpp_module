/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:54:33 by jisokang          #+#    #+#             */
/*   Updated: 2022/06/07 09:31:27 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "easyfind.hpp"
#define MAX_ARR		10
int	main( void )
{
	std::vector<int> vec;

	for (size_t i = 0; i < MAX_ARR; i++)
	{
		vec.push_back(i);
	}

	try
	{
		std::vector<int>::iterator it;
		std::cout << "vec: ";
		printVec(vec);
		it = easyfind(vec, 6);
		std::cout << "easyfind(vec, 6): " BLUE << *it << RESET << std::endl;
		it = easyfind(vec, 42);
		std::cout << "easyfind(vec, 42): " BLUE << *it << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << YELLOW "[🔔Execption]: " << e.what() << RESET "\n";
	}

	return (0);
}
