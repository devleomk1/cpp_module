/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:02:48 by jisokang          #+#    #+#             */
/*   Updated: 2022/06/03 10:12:51 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <string>

template <typename T>
class MutantStack : public std::stack
{
private:
	/* data */
public:
	MutantStack(/* args */);
	~MutantStack();
};

MutantStack::MutantStack(/* args */)
{
}

MutantStack::~MutantStack()
{
}


#endif
