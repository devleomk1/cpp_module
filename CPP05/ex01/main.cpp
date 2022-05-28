/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:25:04 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/28 17:48:01 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
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
	printTitle("Only Form Case");
	try
	{
		Form form_1("Form-001", 20, 20);
		std::cout << form_1;
		Form form_2("Form-002", -123, -123);
		printTestPass();
	}
	catch(const std::exception& e)
	{
		std::cerr << "[🚨Exception]: " YELLOW << e.what() << RESET "\n";
	}

	printTitle("Normal Sign Case");
	try
	{
		Bureaucrat tom("Tom", 15);
		Form form_a("Form-A", 20, 20);
		std::cout << tom;
		std::cout << form_a;
		tom.signForm(form_a);
		std::cout << form_a;
		printTestPass();
	}
	catch(const std::exception& e)
	{
		std::cerr << "[🚨Exception]: " YELLOW << e.what() << RESET "\n";
	}

	printTitle("You Can't Sign Case");
	try
	{
		Bureaucrat pon("Pon", 100);
		Form form_a("Form-A", 20, 20);
		std::cout << pon;
		std::cout << form_a;
		pon.signForm(form_a);
		std::cout << form_a;
		printTestPass();
	}
	catch(const std::exception& e)
	{
		std::cerr << "[🚨Exception]: " YELLOW << e.what() << RESET "\n";
	}

	return (0);
}
