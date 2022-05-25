/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:25:04 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/25 16:32:37 by jisokang         ###   ########.fr       */
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
		std::cout << "[✅Test " GREEN "PASS" RESET"] " MAGENTA << t.getName() << RESET " Work Good!👍" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << YELLOW << e.what() << RESET "\n";
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
		std::cout << "[✅Test " GREEN "PASS" RESET"] " MAGENTA << p.getName() << RESET " Work Good!👍" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << YELLOW << e.what() << RESET "\n";
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
		std::cout << k.getName() << " Work Good!" << std::endl;
		std::cout << "[✅Test " GREEN "PASS" RESET"] " MAGENTA << k.getName() << RESET " Work Good!👍" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << YELLOW << e.what() << RESET "\n";
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
		std::cout << "[✅Test " GREEN "PASS" RESET"] " MAGENTA << r.getName() << RESET " Work Good!👍" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << YELLOW << e.what() << RESET "\n";
	}


	return (0);

}
