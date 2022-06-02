/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:11:45 by jisokang          #+#    #+#             */
/*   Updated: 2022/06/02 11:54:06 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include "color.hpp"

// ft_lstiter(t_list *lst, void (*f)(void *))

// void iter(T *arr, size_t len, const void (*f)(T&) )

template <typename T>
void iter(T *arr, size_t len, void (*f)(T&) )
{
	for (size_t i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}

template <typename T>
void printElement(T element)
{
	std::cout << "[" MAGENTA << element << RESET "] ";
}

#endif
