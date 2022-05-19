/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:54:34 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/19 21:55:46 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brain;
protected:
public:
    Cat( void );
    Cat( const std::string name );
    Cat( const Cat &src );
    Cat &operator=( const Cat &src );
    virtual ~Cat();
    
    virtual void makeSound() const;
};

#endif