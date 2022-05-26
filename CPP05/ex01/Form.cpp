/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:09:00 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/25 21:15:48 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(DEFAULT_NAME), _sign(false), _required_sign_grade(), _required_exec_grade()
{
	std::cout
		<< "[" GREEN "Constructor" RESET " (Form 💼)]"
		<< std::endl;
}

Form::Form(std::string name, unsigned int required_sign_grade, unsigned int required_exec_grade)
	: _name(name), _sign(false), _required_sign_grade(required_sign_grade), _required_exec_grade(required_exec_grade)
{
	// std::cout
	// 	<< "[" GREEN "Constructor" RESET " (Form 💼)]"
	// 	<< std::endl;
	// if (grade < GRADE_HIGHEST)
	// 	throw GradeTooHighException();
	// else if (grade > GRADE_LOWEST)
	// 	throw GradeTooLowException();
	// _grade = grade;

}

Form::Form( const Form &src )
{
	std::cout << "[" YELLOW "Copy" GREEN " constructor" RESET " (Form 💼)]" << std::endl;
	*this = src;
}

Form::~Form()
{
	std::cout
		<< "[" RED "Destructor" RESET " (Form 💼)]"
		<< std::endl;
}
