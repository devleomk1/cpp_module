/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 03:58:40 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/19 20:26:31 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
private:
protected:
public:
    Dog( void );
    Dog( const std::string name );
    Dog( const Dog &src );
    Dog &operator=( const Dog &src );
    ~Dog();

    void makeSound() const;
};

#endif