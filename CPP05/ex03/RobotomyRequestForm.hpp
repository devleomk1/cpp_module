/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:20:55 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/28 17:20:56 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

# define RRF_REQ_SIGN_GRADE	72
# define RRF_REQ_EXEC_GRADE	45

# define RRF_FORM_NAME	"RobotomyRequestForm"
# define RRF_STD_TARGET	"RRF_TARGET"

class RobotomyRequestForm : public Form
{

	private:
		std::string	_target;
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm &operator=( RobotomyRequestForm const & rhs );
		virtual ~RobotomyRequestForm( void );

		const std::string &getTarget( void ) const;
		virtual void execute(Bureaucrat const & executer) const;


};
#endif
