/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:43:23 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/30 13:21:17 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data	a(2019, "COVID-19");
	uintptr_t ptr = serialize(&a);
	Data	*b = deserialize(ptr);

	std::cout << "a:\n" << a << std::endl;
	std::cout << "&a: " << &a << std::endl;
	std::cout << "ptr: "<< ptr << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "*b:\n" << *b << std::endl;
	return (0);
}
