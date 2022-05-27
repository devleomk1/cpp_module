#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

# define PPF_REQ_SIGN_GRADE	25
# define PPF_REQ_EXEC_GRADE	5

# define PPF_STD_TARGET	"PPF_TARGET"

class PresidentialPardonForm : public Form
{

	private:
		std::string	_target;
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		PresidentialPardonForm &operator=( PresidentialPardonForm const & rhs );
		virtual ~PresidentialPardonForm( void );

		const std::string &getTarget( void ) const;

		virtual void execute(Bureaucrat const & executer) const;

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */
