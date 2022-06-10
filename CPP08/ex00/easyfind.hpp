/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:54:36 by jisokang          #+#    #+#             */
/*   Updated: 2022/06/07 09:31:37 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>	//std::find
# include <vector>
# include <exception>
# include <stdexcept>
# include "color.hpp"

template <typename T>
typename T::iterator easyfind(T &t, int target)
{
	/* T는 int 컨테이너라고 가정한다. */
	/* 찾지 못한 에러 케이스를 생각해야 한다. */
	typename T::iterator it = std::find(t.begin(), t.end(), target);
	if (it == t.end())
		throw std::runtime_error("Target Not Found");
	return (it);
}

template <typename T>
void printVec(T &t)
{
	for (size_t i = 0; i < t.size() ; i++)
	{
		std::cout << "[" MAGENTA << t.at(i) << RESET "] ";
	}
	std::cout << std::endl;
}

#endif
