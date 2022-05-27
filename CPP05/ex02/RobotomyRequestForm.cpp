#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", RRF_REQ_SIGN_GRADE, RRF_REQ_EXEC_GRADE), _target(RRF_STD_TARGET)
{
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", RRF_REQ_SIGN_GRADE, RRF_REQ_EXEC_GRADE), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs.getTarget();
	}
	return *this;
}

/*
** --------------------------------- GETTER ----------------------------------
*/

const std::string &RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}

/*
** --------------------------------- EXECUTE ---------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const & executer) const
{
	int	random_box;

	this->executeCheck(executer);
	std::cout << "Wwiiiiiiiiinnnnng~ wwwwiwng wiwwiwiwiwigg (50% Success)" << std::endl;
	srand (time(NULL));
	random_box = rand() % 2;
	if (random_box)
		std::cout << BLUE << this->getTarget() << RESET "'s robotic surgery was a" GREEN " huge success." RESET << std::endl;
	else
		std::cout << BLUE << this->getTarget() << RESET "'s robotic surgery was a" RED " failed." RESET << std::endl;

}


/* ************************************************************************** */
