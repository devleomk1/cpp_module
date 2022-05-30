/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:45:25 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/30 15:34:54 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Base::~Base()
{
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Base * generate(void)
{
	/* A, B 또는 C를 무작위로 인스턴스화하고 인스턴스를 Base 포인터로 반환합니다. 임의 선택 구현을 위해 원하는 것을 자유롭게 사용하십시오. */
	std::string className[3] = {"A", "B", "C"};
	srand(time(NULL));
	int random = rand() % 3;
	std::cout << "Generate " BLUE << className[random] <<  RESET " class!" << std::endl;
	switch (random)
	{
	case RAND_A:
		return ( new A() );
	case RAND_B:
		return ( new B() );
	case RAND_C:
		return ( new C() );
	default :
		return (NULL);
	}
}

void identify(Base* p)
{
	/* dynamic_cast는 형변환에 실패할 경우 nullptr를 리턴한다. */
	if (dynamic_cast<A*>(p))
	{
		std::cout << "identify " GREEN "A" RESET "(Base* p)" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "identify " GREEN "B" RESET "(Base* p)" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "identify " GREEN "C" RESET "(Base* p)" << std::endl;
	}

}

void identify(Base& p)
{
	/* 이 함수 내에서 포인터를 사용하는 것은 금지되어 있습니다. */
	try
	{
		(void) dynamic_cast<A& >(p);
		std::cout << "identify " GREEN "A" RESET "(Base& p)" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		(void) dynamic_cast<B& >(p);
		std::cout << "identify " GREEN "B" RESET "(Base& p)" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		(void) dynamic_cast<C& >(p);
		std::cout << "identify " GREEN "C" RESET "(Base& p)" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
