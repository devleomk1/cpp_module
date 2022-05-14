/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:20:01 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/15 04:03:02 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// Polymorphism = 다향성
int main() 
{
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << j->getType() << " " << std::endl;
    std::cout << "type of i is "<< i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound! j->makeSound();
    meta->makeSound(); 

    delete meta;
    delete i;
    return 0;
}