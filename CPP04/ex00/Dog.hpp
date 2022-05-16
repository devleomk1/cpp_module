/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 03:58:40 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/16 15:35:52 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Dog : public Animal
{
private:
    char * neck;
    /* data */
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