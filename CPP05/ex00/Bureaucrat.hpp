/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:29:08 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/29 01:18:17 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>	//for std::exception
# include "color.hpp"

# define	DEFAULT_NAME	"NO NAME"
# define	DEFAULT_GRADE	150
# define	GRADE_HIGHEST	1
# define	GRADE_LOWEST	150


class Bureaucrat
{
private:
	const std::string   _name;
	unsigned int        _grade; //ranges from 1 (highest possible grade) to 150 (lowest possible grade).
public:
	Bureaucrat( void );
	Bureaucrat( const std::string name, int grade );
	Bureaucrat( const Bureaucrat &src );
	Bureaucrat &operator=( const Bureaucrat &src );
	virtual ~Bureaucrat( void );

	// getter
	const std::string &getName() const;
	const unsigned int &getGrade() const;

	// If the grade is out of range, both of them will throw the same exceptions as the constructor.
	void increGrade();
	void decreGrade();

	// Bureaucrat::GradeTooLowException
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
	/*
	Remember. Since grade 1 is the highest one and 150 the lowest,
	incrementing a grade 3 should give a grade 2 to the bureaucrat.
	*/


};
std::ostream &operator<<(std::ostream &stream, const Bureaucrat &b);

#endif
