/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 00:20:01 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/23 15:45:59 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define META_SIZE   10

// Polymorphism = 다향성

void printHead( std::string str)
{
	std::cout << "\n" << std::setfill('=') << std::setw(48) << "" << std::endl;
	std::cout << GREEN " "<< str << RESET << std::endl;
	std::cout << std::setfill('=') << std::setw(48) << "\n" << std::endl;
}

void testAbstractClass( void )
{
	printHead("Abstract Class");
	// Animal a;
	// 추상 클래스는 선언 할 수 없음.

	Cat c;
	c.makeSound();

	Dog d;
	d.makeSound();
}

void testLeaks( void )
{
	printHead("Check Memory Leaks");
	const Animal *d = new Dog();
	const Animal *c = new Cat();

	delete d;	//should not crate a leak!
	delete c;
}

void testArray( void )
{
	printHead("Array");
	Animal *meta[META_SIZE];

	for (size_t i = 0; i < META_SIZE; i++)
	{
		if (i % 2 == 0)				// 짝수
			meta[i] = new Dog();
		else						// 홀수
			meta[i] = new Cat();
		std::cout << "meta[" CYAN << i << RESET "]: " << meta[i]->getType() << " - ";
		meta[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << "Meta Array construction Done\n" << std::endl;

	for (size_t i = 0; i < META_SIZE; i++)
	{
		delete meta[i];
	}
	std::cout << "Meta Array destruction Done\n" << std::endl;
}

void testDeepCopy( void )
{
	printHead("Deep Copy");

	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat();

	cat1->printBrain();
	cat1->setBrainWashing("🧠");
	cat1->printBrain();

	std::cout << "cat2's ";
	cat2->printBrain();

	std::cout << "cat2 = cat1" << std::endl;
	cat2 = cat1;

	std::cout << "cat2's ";
	cat2->printBrain();

	std::cout << "delete cat1 " << std::endl;
	delete cat1;

	std::cout << "cat2's ";
	cat2->printBrain();
}

int main( void )
{
	testAbstractClass();
	testLeaks();
	testArray();
	testDeepCopy();
	return (0);
}
