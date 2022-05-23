/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:21:52 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/22 18:00:49 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "color.hpp"

# define IDEA_SIZE  100

class Brain
{
private:
protected:
    std::string ideas[IDEA_SIZE];
public:
    Brain( void );
    Brain( const std::string think );
    Brain( const Brain &src );
    Brain &operator=( const Brain &src );
    virtual ~Brain();

    void SetBrain( const std::string str );
    void SetIdea( const size_t i, const std::string str );
    std::string getIdea( const size_t i );

};


#endif
