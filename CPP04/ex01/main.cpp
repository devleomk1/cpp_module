/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:20:01 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/16 16:55:42 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// Polymorphism = 다향성

#define META_SIZE   10

int main() 
{
    std::cout << "\n===============================================" << std::endl;
    std::cout << "===================  " GREEN "O K" RESET "  =====================" << std::endl;
    std::cout << "===============================================\n" << std::endl;

    const Animal* meta[META_SIZE];

    for (size_t i = 0; i < META_SIZE; i++)
    {
        // 짝수
        if (i % 2 == 0)
            meta[i] = new Dog();
        // 홀수
        else
            meta[i] = new Cat();        
    }

    for (size_t i = 0; i < META_SIZE; i++)
    {
        std::cout << "meta["<< i <<"]: " << meta[i]->getType() <<" think" << meta[i]->getIdea() << std::endl;
    }
    

    for (size_t i = 0; i < META_SIZE; i++)
        delete meta[i];

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