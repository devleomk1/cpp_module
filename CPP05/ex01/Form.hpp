/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:09:04 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/29 01:18:17 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <exception>
# include "color.hpp"

# define DEFAULT_FORM_NAME	"DEFAULT FORM"
# define DEFAULT_FORM_SIGN	false
# define DEFAULT_SIGN_GRADE	150
# define DEFAULT_EXEC_GRADE	150

//Prototype
class Bureaucrat;

class Form
{
private:
	/* 모든 속성들은 private 입니다. protected가 아닙니다. */
	const std::string		_name;
	bool					_sign;
	const unsigned int		_required_sign_grade;
	const unsigned int		_required_exec_grade;
public:
	Form( void );
	Form( const const std::string name, const unsigned int required_sign_grade, const unsigned int required_exec_grade );
	Form( const Form &src );
	Form &operator=( const Form &src );
	virtual ~Form( void );

	// getter
	const std::string	&getName( void ) const;
	const bool 			&getSign( void ) const;
	const unsigned int	&getRequiredSignGrade( void ) const;
	const unsigned int	&getRequiredExecGrade( void ) const;

	// Addtional Function ex01
	void beSigned(const Bureaucrat &b);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};


};
std::ostream &operator<<(std::ostream &stream, const Form &b);

#endif
