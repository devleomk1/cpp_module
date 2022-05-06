/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:44:46 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/06 17:32:46 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>		//atoi
# include "color.hpp"
# include "Contact.hpp"

# define MAX_PAGE	8

class PhoneBook
{
private:
	//자신 접근 O, 자식 접근 X, 외부 접근 X
	Contact	contact[MAX_PAGE];
	int		idx;
	int		cnt;
	void	PrintTable();
	void	SearchContact();
public:
	//자신 접근 O, 자식 접근 O, 외부 접근 O
	PhoneBook(void);
	~PhoneBook(void);
	void	AddBook();
	void	SearchBook();
};

#endif
