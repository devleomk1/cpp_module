/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:02:48 by jisokang          #+#    #+#             */
/*   Updated: 2022/06/03 14:19:24 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <string>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
	T	*_data;
public:
	MutantStack( void );
	MutantStack( MutantStack const & src );
	MutantStack &operator=( MutantStack const & rhs );
	~MutantStack( void );
};


#endif
