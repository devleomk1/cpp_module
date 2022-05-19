/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:20:01 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/19 22:56:59 by jisokang         ###   ########.fr       */
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

    Animal* meta[META_SIZE];

    for (size_t i = 0; i < META_SIZE; i++)
    {
        if (i % 2 == 0)             // 짝수
            meta[i] = new Dog();
        else                        // 홀수
            meta[i] = new Cat();        
    }

    for (size_t i = 0; i < META_SIZE; i++)
    {
        std::cout << "meta["<< i <<"]: " << meta[i]->getType() <<" think :" << meta[i] << std::endl;
    }

    for (size_t i = 0; i < META_SIZE; i++)
        delete meta[i];

    for (size_t i = 0; i < META_SIZE; i++)
    {
        std::cout << "meta["<< i <<"]: " << meta[i]->getType() <<" think :" << meta[i] << std::endl;
    }

    return 0;
}