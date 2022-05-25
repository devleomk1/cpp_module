/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:25:04 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/25 17:05:14 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iomanip>

void printTitle( std::string str )
{
	std::cout << std::endl << std::setw(35) << std::setfill('=') << "" << std::endl;
	std::cout << GREEN << str << RESET << std::endl;
	std::cout << std::setw(35) << std::setfill('=') << "" << std::endl;
}

void printTestPass()
{
	std::cout << "[✅Test " GREEN "PASS" RESET"] Work Good!👍" << std::endl;
}

int main( void )
{
	/**
	 * TEST Normal Case
	 */
	printTitle("Noraml Test Case");
	try
	{
		Bureaucrat t("Tom", 15);
		std::cout << t;
		t.increGrade();
		std::cout << t;
		printTestPass();
	}
	catch(const std::exception& e)
	{
		std::cerr << "[🚨Exception]: " YELLOW << e.what() << RESET "\n";
	}

	/**
	 * Wrong New Case
	 */
	printTitle("Wrong New Case");
	try
	{
		Bureaucrat p("Pon", 999);
		std::cout << p;
		p.increGrade();
		std::cout << p;
		printTestPass();
	}
	catch(const std::exception& e)
	{
		std::cerr << "[🚨Exception]: " YELLOW << e.what() << RESET "\n";
	}

	/**
	 * Wrong Case ++
	 */
	printTitle("Wrong Test Case ++");
	try
	{
		Bureaucrat k("Kim", 1);
		std::cout << k;
		k.increGrade();
		std::cout << k;
		printTestPass();
	}
	catch(const std::exception& e)
	{
		std::cerr << "[🚨Exception]: " YELLOW << e.what() << RESET "\n";
	}


	/**
	 * Wrong Case --
	 */
	printTitle("Wrong Test Case --");
	try
	{
		Bureaucrat r("Rat", 150);
		std::cout << r;
		r.decreGrade();
		std::cout << r;
		printTestPass();
	}
	catch(const std::exception& e)
	{
		std::cerr << "[🚨Exception]: " YELLOW << e.what() << RESET "\n";
	}
	return (0);
}
