/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:09:43 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/16 15:36:55 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGACAT_HPP
# define WRONGACAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    /* data */
protected:
public:
    WrongCat( void );
    WrongCat( const std::string name );
    WrongCat( const WrongCat &src );
    WrongCat &operator=( const WrongCat &src );
    ~WrongCat();

    void makeSound() const;
};

#endif