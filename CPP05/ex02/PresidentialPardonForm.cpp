/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:42:19 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/27 15:44:26 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("PresidentialPardonForm", PPF_REQ_SIGN_GRADE, PPF_REQ_EXEC_GRADE), _target(PPF_STD_TARGET)
{
}

PresidentialPardonForm::PresidentialPardonForm( std::string target) : Form("PresidentialPardonForm", PPF_REQ_SIGN_GRADE, PPF_REQ_EXEC_GRADE),  _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
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
