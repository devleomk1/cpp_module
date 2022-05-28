#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

# define FORM_MAX	3

class Intern
{
	private:
	public:
		Intern( void );
		Intern( Intern const & src );
		Intern &operator=( Intern const & rhs );
		virtual ~Intern( void );

		Form *makeForm( const std::string &form_name, const std::string &target);

		class FormNotMatchException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};
#endif /* *********************************************************** Intern_H */
