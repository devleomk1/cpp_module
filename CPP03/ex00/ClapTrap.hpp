/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:07:27 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/09 19:11:33 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ClapTrap
{
private:
    /* data */
public:
    ClapTrap();								    //Default constructor
	ClapTrap(const ClapTrap &f);				//Copy constructor
	ClapTrap &operator=(const ClapTrap &f);		//Copy Asginment operator
	~ClapTrap();								//Destructor
};
