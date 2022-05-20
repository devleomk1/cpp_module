/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:29:08 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/20 16:29:15 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "color.hpp"

class Bureaucrat
{
private:
    const std::string   name;
    unsigned int        grade; //ranges from 1 (highest possible grade) to 150 (lowest possible grade).
public:
    Bureaucrat( void );
    Bureaucrat( const Bureaucrat &src );
    Bureaucrat &operator=( const Bureaucrat &src );
    virtual ~Bureaucrat( void );

    // Bureaucrat::GradeTooHighException 
    // Bureaucrat::GradeTooLowException.

    std::string getName();
    unsigned int getGrade();

    void increGrade();
    void decreGrade();
    // If the grade is out of range, both of them will throw the same exceptions as the constructor.

    /* 
    Remember. Since grade 1 is the highest one and 150 the lowest, 
    incrementing a grade 3 should give a grade 2 to the bureaucrat.
    */
};

#endif