/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:21:52 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/16 15:30:40 by jisokang         ###   ########.fr       */
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
    // Animal( const std::string name );
    Brain( void );
    Brain( const Brain &src );
    Brain &operator=( const Brain &src );
    virtual ~Brain();

};


#endif