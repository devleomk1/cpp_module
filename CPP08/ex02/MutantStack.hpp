/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:02:48 by jisokang          #+#    #+#             */
/*   Updated: 2022/06/07 06:05:24 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iostream>
# include <string>

//class Container = deque<T>을 기본으로 넣어준다.
template <typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	typedef typename std::stack<T>::container_type::iterator						iterator;
	typedef typename std::stack<T>::container_type::const_iterator					const_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator			const_reverse_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator				reverse_iterator;

	//cbegin() is C++11
	iterator begin()
	{
		return (this->c.begin());
	};
	const_iterator begin() const
	{
		return (this->c.begin());
	};

	iterator end()
	{
		return (this->c.end());
	};
	const_iterator end() const
	{
		return (this->c.end());
	};

	reverse_iterator rbegin()
	{
		return (this->c.rbegin());
	};
	const_reverse_iterator rbegin() const
	{
		return (this->c.rbegin());
	};
	reverse_iterator rend()
	{
		return (this->c.rend());
	};
	const_reverse_iterator rend() const
	{
		return (this->c.rend());
	};

	MutantStack<T>( void ) {};
	MutantStack<T>( MutantStack<T> const & src )
	{
		if ( this != &src )
		{
			std::stack<T>::operator=(src);
		}
		return *this;
	};
	MutantStack<T> &operator=( MutantStack<T> const & rhs )
	{
		*this = rhs;
	};
	virtual ~MutantStack<T>( void ) {};
};

#endif
