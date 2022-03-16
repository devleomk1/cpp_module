/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:35:23 by jisokang          #+#    #+#             */
/*   Updated: 2022/03/16 14:19:43 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
private:
	int			idx;
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_num;
	std::string	secret;
public:
	Contact(void);
	~Contact(void);
	void	AddContact(int i);
	void	PrintDetail(void);
	void	PrintOneline(void);
	void	StringShortener(std::string str, int max_len);
};

#endif
