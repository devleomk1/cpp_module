/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 03:58:40 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/22 22:18:26 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
protected:
public:
    Dog( void );
    Dog( const std::string name );
    Dog( const Dog &src );
    Dog &operator=( const Dog &src );
    virtual ~Dog();

    virtual void makeSound() const;
    const Brain *getBrain( void ) const;
    void setBrainWashing( const std::string str );
    void printBrain( void ) const;
};

#endif
