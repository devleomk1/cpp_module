/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:54:33 by jisokang          #+#    #+#             */
/*   Updated: 2022/06/02 23:24:24 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "easyfind.hpp"
/* 어떻게 출력 해야 할까?! */
#define MAX_ARR		10
int	main( void )
{
	// vector로 데이터를 넣은 통을 만들고 거기서 특정 값을 찾아 보자
	// vector가 뭔데?
	//vector<int>v = {1, 2, 3}; 개멍청 push back 하자
	//std::vector<int> vec = {5, 9, 7, 6, 4, 3, 1, 2, 8, 0};
	std::vector<int> vec;

	for (size_t i = 0; i < MAX_ARR; i++)
	{
		vec.push_back(i);
	}
	std::vector<int>::iterator it;
	try
	{
		it = easyfind(vec, 6);
		std::cout << "easyfind(vec, 6): " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}



	return (0);
}
