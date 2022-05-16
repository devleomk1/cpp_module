/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:06:04 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/16 15:36:41 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include "color.hpp"

class WrongAnimal
{
private:
protected:
    std::string type;
public:
    // WrongAnimal( const std::string name );
    WrongAnimal( void );
    WrongAnimal( const WrongAnimal &src );
    WrongAnimal &operator=( const WrongAnimal &src );
    ~WrongAnimal();

    std::string getType( void ) const;
    void makeSound( void ) const;
    // virtual void makeSound( void );
    
    // virtual void makeSound( void );          가상 함수
    // virtual void makeSound( void ) = 0;      순수 가상 함수
};

#endif