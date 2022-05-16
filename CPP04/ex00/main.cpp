/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:20:01 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/16 14:19:22 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
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

    std::cout << "\n===============================================" << std::endl;
    std::cout << "=================== WRONG =====================" << std::endl;
    std::cout << "===============================================\n" << std::endl;

    WrongAnimal *wmeta = new WrongAnimal();
    WrongAnimal *wi = new WrongCat();

    std::cout << "[meta->getType()]: " << wmeta->getType() << std::endl;
    std::cout << "[i->getType()]: " << wi->getType() << std::endl;

    wmeta->makeSound();
    wi->makeSound();
    //WrongCat 입장에서는 부모의 makeSound()인지 자신의 makeSound()인지 확인할 수 없다!

    std::cout << "delete meta: ";
    delete wmeta;
    std::cout << "delete i: ";
    delete wi;

    return 0;
}