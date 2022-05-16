/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:54:34 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/16 14:29:32 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{
private:
    char * neck;
    /* data */
protected:
public:
    Cat( void );
    Cat( const std::string name );
    Cat( const Cat &src );
    Cat &operator=( const Cat &src );
    virtual ~Cat();

    virtual void makeSound() const;
};