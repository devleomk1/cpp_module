/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:20:28 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/28 22:32:23 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

# define SCF_REQ_SIGN_GRADE	145
# define SCF_REQ_EXEC_GRADE	137

# define SCF_FORM_NAME	"ShrubberyCreationForm"
# define SCF_STD_TARGET	"SCF_TARGET"

class ShrubberyCreationForm : public Form
{

	private:
		std::string	_target;
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm &operator=( ShrubberyCreationForm const & rhs );
		virtual ~ShrubberyCreationForm();

		const std::string &getTarget( void ) const;
		virtual void execute(Bureaucrat const & executer) const;
};
#endif
