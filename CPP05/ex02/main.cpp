/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:25:04 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/28 17:09:13 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
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
	printTitle("TEST PASS CASE");

	Bureaucrat bob("Bob", 20);
	Form *ppf = new PresidentialPardonForm("Badman");

	std::cout << *ppf;
	bob.executeForm(*ppf);
	bob.signForm(*ppf);
	bob.executeForm(*ppf);

	printTitle("SHRUBBERY CREATION");
	Form *scf = new ShrubberyCreationForm("My Home");
	std::cout << *scf;
	bob.executeForm(*scf);
	bob.signForm(*scf);
	bob.executeForm(*scf);

	printTitle("ROBOTOMY REQUEST");
	Bureaucrat kim("kim", 1);
	Form *rrf = new RobotomyRequestForm("Good Kid");

	kim.executeForm(*rrf);
	kim.signForm(*rrf);
	kim.executeForm(*rrf);

	delete ppf;
	delete rrf;
	return (0);
}
