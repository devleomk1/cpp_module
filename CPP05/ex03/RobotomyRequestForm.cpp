/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:20:19 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/29 01:33:34 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
	: Form(RRF_FORM_NAME, RRF_REQ_SIGN_GRADE, RRF_REQ_EXEC_GRADE), _target(RRF_STD_TARGET)
{
}

RobotomyRequestForm::RobotomyRequestForm( const std::string target )
	: Form(RRF_FORM_NAME, RRF_REQ_SIGN_GRADE, RRF_REQ_EXEC_GRADE), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
	: Form(RRF_FORM_NAME, RRF_REQ_SIGN_GRADE, RRF_REQ_EXEC_GRADE), _target(src.getTarget())
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
		return *this;
	return *this;
}

/*
** --------------------------------- GETTER ----------------------------------
*/

const std::string &RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}

/*
** --------------------------------- EXECUTE ---------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const & executer) const
{

	this->executeCheck(executer);

	std::cout << "Wwiiiiiiiiinnnnng~ wwwwiwng wiwwiwiwiwigg (50% Success)" << std::endl;
	srand (time(NULL));
	int random_box = rand() % 2;
	if (random_box)
		std::cout << BLUE << this->getTarget() << RESET "'s robotic surgery was a" GREEN " huge success." RESET << std::endl;
	else
		std::cout << BLUE << this->getTarget() << RESET "'s robotic surgery was a" RED " failed." RESET << std::endl;

}


/* ************************************************************************** */
