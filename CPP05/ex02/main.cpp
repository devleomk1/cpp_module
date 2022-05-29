/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:25:04 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/29 10:24:58 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iomanip>

void printSingleBar()
{
	std::cout << std::endl << std::setw(35) << std::setfill('=') << "" << std::endl;
}

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
	Bureaucrat kim("Kim", 1);
	Bureaucrat jim("Jim", 7);
	Bureaucrat bob("Bob", 42);

	printTitle("PRESIDENTIAL PARDON");
	Form *ppf = new PresidentialPardonForm("Rebel");

	std::cout << *ppf;
	bob.executeForm(*ppf);
	bob.signForm(*ppf);
	jim.signForm(*ppf);
	std::cout << *ppf;
	jim.executeForm(*ppf);
	kim.executeForm(*ppf);

	printTitle("SHRUBBERY CREATION");
	Form *scf = new ShrubberyCreationForm("MyHome");
	std::cout << *scf;
	bob.executeForm(*scf);
	bob.signForm(*scf);
	bob.executeForm(*scf);

	printTitle("ROBOTOMY REQUEST");
	Form *rrf = new RobotomyRequestForm("Good Kid");

	std::cout << *rrf;
	kim.executeForm(*rrf);
	kim.signForm(*rrf);
	kim.executeForm(*rrf);

	printSingleBar();

	delete ppf;
	delete scf;
	delete rrf;
	return (0);
}
