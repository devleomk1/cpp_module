/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:09:04 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/25 21:14:40 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include "color.hpp"

class Form
{
private:
	const std::string		_name;
	bool					_sign;
	const unsigned int		_required_sign_grade;
	const unsigned int		_required_exec_grade;
public:
	Form( void );
	Form( std::string name, unsigned int required_sign_grade, unsigned int required_exec_grade );
	Form( const Form &src );
	Form &operator=( const Form &src );
	virtual ~Form( void );

	// getter
	const std::string &getName() const;
	const unsigned int &getGrade() const;

	// If the grade is out of range, both of them will throw the same exceptions as the constructor.
	void increGrade();
	void decreGrade();

	// Addtional Function ex01
	void beSigned();

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
