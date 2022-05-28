/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:09:00 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/28 22:34:46 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
	: _name(DEFAULT_NAME), _sign(DEFAULT_FORM_SIGN)
	, _required_sign_grade(DEFAULT_SIGN_GRADE), _required_exec_grade(DEFAULT_EXEC_GRADE)
{
	std::cout
		<< "[" GREEN "Constructor" RESET " (Form 📑)]"
		<< std::endl;
}

Form::Form( const std::string name, unsigned int required_sign_grade, unsigned int required_exec_grade)
	: _name(name), _sign(DEFAULT_FORM_SIGN), _required_sign_grade(required_sign_grade), _required_exec_grade(required_exec_grade)
{
	 std::cout
	 	<< "[" GREEN "Constructor" RESET " (Form 📑)]"
	 	<< std::endl;
	 if (_required_sign_grade < GRADE_HIGHEST || _required_exec_grade < GRADE_HIGHEST)
	 	throw GradeTooHighException();
	 else if (_required_sign_grade > GRADE_LOWEST || _required_exec_grade > GRADE_LOWEST)
	 	throw GradeTooLowException();
}

Form &Form::operator=( const Form &src )
{
	std::cout << "[" YELLOW "Copy" RESET " assignment operator called (Form 📑)]" << std::endl;
	if ( this != &src )
	{
		this->_sign = src.getSign();
	}
	return (*this);
}

Form::Form( const Form &src )
	: _name(src._name), _required_sign_grade(src._required_sign_grade), _required_exec_grade(src._required_exec_grade)
{
	std::cout << "[" YELLOW "Copy" GREEN " constructor" RESET " (Form 📑)]" << std::endl;
	*this = src;
}

Form::~Form()
{
	std::cout
		<< "[" RED "Destructor" RESET " (Form 📑)]"
		<< std::endl;
}

std::ostream &operator<<( std::ostream &stream, const Form &form )
{
	std::string tf;
	if (form.getSign() == true)
		tf = "[✅]TRUE";
	else
		tf = "[ ]FALSE";

	stream << "[" CYAN << form.getName() << RESET "]\n"
		<< "- Signed:\t\t" << tf << "\n"
		<< "- Required Sign Grade:\t" << form.getRequiredSignGrade() << "\n"
		<< "- Required Exec Grade:\t" << form.getRequiredExecGrade() << std::endl;
	return (stream);
}

/************************************
 *
 * @brief Getter Member Functions
 *
 ************************************/

const std::string &Form::getName() const
{
	return (this->_name);
}

const bool &Form::getSign() const
{
	return (this->_sign);
}

const unsigned int &Form::getRequiredSignGrade() const
{
	return (this->_required_sign_grade);
}

const unsigned int &Form::getRequiredExecGrade() const
{
	return (this->_required_exec_grade);
}

/************************************
 *
 * @brief Execption
 *
 ************************************/

const char *Form::GradeTooHighException::what( void ) const throw()
{
	return ("Grade Too High!");
}

const char *Form::GradeTooLowException::what( void ) const throw()
{
	return ("Grade Too Low!");
}

const char *Form::NotSignedException::what( void ) const throw()
{
	return ("Not Signed!");
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->getRequiredSignGrade())
		throw GradeTooLowException();
	this->_sign = true;
}

void Form::executeCheck(const Bureaucrat &b) const
{
	if (this->getSign() == false)
		throw NotSignedException();
	if (b.getGrade() > this->getRequiredExecGrade())
		throw GradeTooLowException();


}
