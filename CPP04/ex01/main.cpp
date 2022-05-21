/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:20:01 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/21 20:27:26 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define META_SIZE   10

// Polymorphism = 다향성
int main( void ) 
{
    std::cout << "\n===============================================" << std::endl;
    std::cout << "===================  " GREEN "Check Memory leaks" RESET "  =====================" << std::endl;
    std::cout << "===============================================\n" << std::endl;

    const Animal *d = new Dog();
    const Animal *c = new Cat();

    delete d;   //should not crate a leak!
    delete c;

    std::cout << "\n===============================================" << std::endl;
    std::cout << "===================  " GREEN "O K" RESET "  =====================" << std::endl;
    std::cout << "===============================================\n" << std::endl;

    Animal *meta[META_SIZE];

    for (size_t i = 0; i < META_SIZE; i++)
    {
        if (i % 2 == 0)             // 짝수
            meta[i] = new Dog();
        else                        // 홀수
            meta[i] = new Cat();    
        std::cout << "meta[" << i << "]: " << meta[i]->getType() << std::endl;
    }

    Cat *nabi = new Cat();   
    *meta[2] = *nabi;
    std::cout << "meta[2] is nabi?: " << meta[2]->getType() <<" think :" << meta[2] << std::endl;
    delete nabi;
    std::cout << "meta[2] is nabi?: " << meta[2]->getType() <<" think :" << meta[2] << std::endl;
    

    for (size_t i = 0; i < META_SIZE; i++)
    {
        std::cout << "meta["<< i <<"]: " << meta[i]->getType() <<" think :" << meta[i] << std::endl;
        delete meta[i];
        std::cout << "meta["<< i <<"]: " << meta[i]->getType() <<" think :" << meta[i] << std::endl;
    }
    return 0;
}