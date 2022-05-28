/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:20:17 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/28 17:20:18 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form(SCF_FORM_NAME, SCF_REQ_SIGN_GRADE, SCF_REQ_EXEC_GRADE), _target(SCF_STD_TARGET)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
	: Form(SCF_FORM_NAME, SCF_REQ_SIGN_GRADE, SCF_REQ_EXEC_GRADE), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
	: Form(SCF_FORM_NAME, SCF_REQ_SIGN_GRADE, SCF_REQ_EXEC_GRADE)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs.getTarget();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const std::string &ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const & executer) const
{
	this->executeCheck(executer);

	std::ofstream	file_out(this->_target + "_shrubbery", std::ios::out | std::ios::trunc);
	std::cout << "Planting trees at " BLUE << this->getTarget() << RESET "... " GREEN "DONE!" RESET << std::endl;

	file_out << "               ,@@@@@@@," << "\n";
	file_out <<"       ,,,.   ,@@@@@@/@@,  .oo8888o." << "\n";
	file_out <<"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << "\n";
	file_out <<"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << "\n";
	file_out <<"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << "\n";
	file_out <<"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << "\n";
	file_out <<"   `&%\\ ` /%&'    |.|        \\ '|8'" << "\n";
	file_out <<"       |o|        | |         | |" << "\n";
	file_out <<"       |.|        | |         | |" << "\n";
	file_out <<"     \\/ ._\\//_/__/  ,\\_//___\\/.  \\_//__/_" << std::endl;

	file_out.close();
}


/* ************************************************************************** */
