/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:29:04 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/24 17:42:40 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(DEFAULT_NAME)
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


}

Bureaucrat::Bureaucrat( const Bureaucrat &src )
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
		this->_grade = src._grade;
	}
	return (*this);
}

std::ostream &operator<<( std::ostream &o, Bureaucrat const &i )
{
	//o << "Value = " << i.getValue();
	return o;
}

std::string Bureaucrat::getName()
{
	return (this->_name);
}

unsigned int Bureaucrat::getGrade()
{
	return (this->_grade);
}

void Bureaucrat::increGrade()
{
	this->_grade--;
}

void Bureaucrat::decreGrade()
{
	this->_grade++;
}
