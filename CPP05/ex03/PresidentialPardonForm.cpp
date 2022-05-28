/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:42:19 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/28 22:32:46 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm( void )
	: Form(PPF_FORM_NAME, PPF_REQ_SIGN_GRADE, PPF_REQ_EXEC_GRADE), _target(PPF_STD_TARGET)
{
}

PresidentialPardonForm::PresidentialPardonForm( const std::string target)
	: Form(PPF_FORM_NAME, PPF_REQ_SIGN_GRADE, PPF_REQ_EXEC_GRADE),  _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
	: Form(PPF_FORM_NAME, PPF_REQ_SIGN_GRADE, PPF_REQ_EXEC_GRADE)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs.getTarget();
	}
	return *this;
}


/*
** --------------------------------- GETTER ----------------------------------
*/

const std::string &PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}


/*
** --------------------------------- EXECUTE ---------------------------------
*/

void PresidentialPardonForm::execute(Bureaucrat const & executer) const
{
	this->executeCheck(executer);
	std::cout << BLUE << this->getTarget() << RESET " has been pardoned by Zaphod Beeblebrox." << std::endl;
}


/* ************************************************************************** */
