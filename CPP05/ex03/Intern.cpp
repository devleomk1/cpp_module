#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &Intern::operator=( Intern const & rhs )
{
	//if ( this != &rhs )
	//{
	//	this->_value = rhs.getValue();
	//}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

static Form *makePresidentialPardonForm( const std::string & target)
{
	return ( new PresidentialPardonForm(target) );
}

static Form *makeRobotomyRequestForm( const std::string &target)
{
	return ( new RobotomyRequestForm(target) );
}

static Form *makeShrubberyCreationForm( const std::string &target)
{
	return ( new ShrubberyCreationForm(target) );
}


Form *Intern::makeForm( const std::string &form_name, const std::string &target )
{
	Form *rtn_form = NULL;
	std::string forms[FORM_MAX] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form *(*func[FORM_MAX])(const std::string &) = { &makePresidentialPardonForm, &makeRobotomyRequestForm, &makeShrubberyCreationForm };

	for (size_t i = 0; i < FOPEN_MAX; i++)
	{
		if (forms[i] == form_name)
		{
			rtn_form = func[i]( target );
			std::cout << "Intern creates " BLUE << forms[i] << RESET << std::endl;
			return (rtn_form);
		}
	}

	std::cout << "Intern creates ";
	return (rtn_form);
}


/* ************************************************************************** */
