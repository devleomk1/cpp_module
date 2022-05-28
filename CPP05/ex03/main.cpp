/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:25:04 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/28 23:20:47 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
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
	Intern someRandomIntern;
	Form *ppf;
	Form *rrf;
	Form *scf;
	Form *wtf;

	ppf = someRandomIntern.makeForm("presidential pardon", "Me");
	rrf = someRandomIntern.makeForm("robotomy request", "Kim");
	scf = someRandomIntern.makeForm("shrubbery creation", "Company");
	wtf = someRandomIntern.makeForm("wtf", "BOSS");

	delete ppf;
	delete rrf;
	delete scf;
	delete wtf;
	return (0);
}
