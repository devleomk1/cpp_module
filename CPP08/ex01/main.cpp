/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 00:04:50 by jisokang          #+#    #+#             */
/*   Updated: 2022/06/03 08:06:36 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

# define BIG_NUM	10000

void printTitle( std::string str )
{
	std::cout << std::endl << std::setw(35) << std::setfill('=') << "" << std::endl;
	std::cout << GREEN << str << RESET << std::endl;
	std::cout << std::setw(35) << std::setfill('=') << "" << std::endl;
}

int main()
{

	printTitle("Small Test");
	try
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.printVector(5);
		std::cout << "Longest Span:  " << sp.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	printTitle("Wrong Test");
	try
	{
		Span sp = Span(3);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(11);
		sp.addNumber(42);

		sp.printVector(5);
		std::cout << "Longest Span:  " << sp.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	printTitle("Big Test");
	try
	{
		Span sp2 = Span(BIG_NUM);
		srand(time(NULL));
		for (size_t i = 0; i < BIG_NUM; i++)
		{
			sp2.addNumber(rand());
			//sp2.addNumber(i);
		}
		std::cout << "Longest Span:  " << sp2.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
