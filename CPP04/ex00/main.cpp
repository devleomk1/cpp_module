/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:20:01 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/16 15:09:06 by jisokang         ###   ########.fr       */
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
    std::cout << "\n===============================================" << std::endl;
    std::cout << "===================  " GREEN "O K" RESET "  =====================" << std::endl;
    std::cout << "===============================================\n" << std::endl;

    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << "\n";
    std::cout << "i->" YELLOW "getType" RESET "(): "<< i->getType() << " " << std::endl;
    std::cout << "j->" YELLOW "getType" RESET "(): " << j->getType() << " " << std::endl;
    
    std::cout << "\n";
    std::cout << "i->" YELLOW "makeSound" RESET "(): ";
    i->makeSound();     //will output the Cat sound!
    std::cout << "j->" YELLOW "makeSound" RESET "(): ";
    j->makeSound();     //will output the Dog sound!
    std::cout << "meta->" YELLOW "makeSound" RESET "(): ";
    meta->makeSound();  //will output the Animal sound!

    std::cout << "\n";
    std::cout << "delete meta: " << std::endl;
    delete meta;
    std::cout << "delete i: " << std::endl;
    delete i;
    std::cout << "delete j: " << std::endl;
    delete j;

    std::cout << "\n===============================================" << std::endl;
    std::cout << "=================== " RED "WRONG" RESET " =====================" << std::endl;
    std::cout << "===============================================\n" << std::endl;

    WrongAnimal *wmeta = new WrongAnimal();
    WrongAnimal *wi = new WrongCat();
    
    std::cout << "\n";
    std::cout << "wmeta->" YELLOW "getType" RESET "(): " << wmeta->getType() << " " << std::endl;
    std::cout << "wi->" YELLOW "getType" RESET "(): "<< wi->getType() << " " << std::endl;
    
    std::cout << "\n";
    std::cout << "wmeta->" YELLOW "makeSound" RESET "(): ";
    wmeta->makeSound();
    std::cout << "wi->" YELLOW "makeSound" RESET "(): ";
    wi->makeSound();
    //WrongCat 입장에서는 부모의 makeSound()인지 자신의 makeSound()인지 확인할 수 없다!

    std::cout << "\n";
    std::cout << "delete meta: " << std::endl;
    delete wmeta;
    std::cout << "delete i: " << std::endl;
    delete wi;

    return 0;
}