/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:02:38 by jisokang          #+#    #+#             */
/*   Updated: 2022/06/07 08:51:43 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iomanip>

void printSingleBar()
{
	std::cout << std::setw(35) << std::setfill('=') << "" << std::endl;
}

int main()
{
	//다른 케이스를 추가로 보여줄것 안그러면 KO
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << "mstack.top():  " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack.size(): " << mstack.size() << std::endl;

	printSingleBar();

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
		++it;
	}
	printSingleBar();
	std::stack<int> s(mstack);

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	while (rit != rite)
	{
	std::cout << *rit << std::endl;
		++rit;
	}
	return 0;
}
