/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:29:04 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/28 17:58:20 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(DEFAULT_NAME), _grade(DEFAULT_GRADE)
{
	std::cout
		<< "[" GREEN "Constructor" RESET " (Bureaucrat 💼)]"
		<< std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade) : _name(name)
{
	std::cout
		<< "[" GREEN "Constructor" RESET " (Bureaucrat 💼)]"
		<< std::endl;
	if (grade < GRADE_HIGHEST)
		throw GradeTooHighException();
	else if (grade > GRADE_LOWEST)
		throw GradeTooLowException();
	_grade = grade;

}

Bureaucrat::Bureaucrat( const Bureaucrat &src ) : _name(DEFAULT_NAME)
{
	std::cout << "[" YELLOW "Copy" GREEN " constructor" RESET " (Bureaucrat 💼)]" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	std::cout
		<< "[" RED "Destructor" RESET " (Bureaucrat 💼)]"
		<< std::endl;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &src )
{
	std::cout << "[" YELLOW "Copy" RESET " assignment operator called (Bureaucrat 💼)]" << std::endl;
	if ( this != &src )
	{
		this->_grade = src.getGrade();
	}
	return (*this);
}

std::ostream &operator<<( std::ostream &stream, const Bureaucrat &b )
{
	stream << MAGENTA << b.getName() << RESET ", bureaucrat grade " BLUE << b.getGrade() << RESET << std::endl;
	return (stream);
}

const std::string &Bureaucrat::getName() const
{
	return (this->_name);
}

const unsigned int &Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::increGrade()
{
	std::cout << YELLOW "increGrade()" RESET " call" << std::endl;
	if(_grade <= GRADE_HIGHEST)
		throw GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decreGrade()
{
	std::cout << YELLOW "decreGrade()" RESET " call" << std::endl;
	if (_grade >= GRADE_LOWEST)
		throw GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::signForm(Form &f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << MAGENTA << this->getName() << RESET "(Gr." << this->getGrade() << ") signed " CYAN << f.getName() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << MAGENTA << this->getName() << RESET "(Gr." << this->getGrade() << ") couldn't sign " CYAN << f.getName() << RESET " because " YELLOW << e.what() << RESET << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << MAGENTA << this->getName() << RESET "(Gr." << this->getGrade() << ") executed " CYAN << form.getName() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << MAGENTA << this->getName() << RESET "(Gr." << this->getGrade() << ") couldn't execute " CYAN << form.getName() << RESET " because " YELLOW << e.what() << RESET << std::endl;
	}

}

const char *Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return ("Grade Too High!");
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return ("Grade Too Low!");
}


