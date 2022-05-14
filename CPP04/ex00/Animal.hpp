/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:21:52 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/15 03:53:49 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "color.hpp"

class Animal
{
private:
protected:
    std::string type;
public:
    // Animal( const std::string name );
    Animal( void );
    Animal( const Animal &src );
    Animal &operator=( const Animal &src );
    ~Animal();

    std::string getType( void ) const;
    void makeSound( void ) const;
    // virtual void makeSound( void );
    
    // virtual void makeSound( void );          가상 함수
    // virtual void makeSound( void ) = 0;      순수 가상 함수
};


#endif