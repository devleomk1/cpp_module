/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:46:15 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/11 03:23:16 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon_type;   //이건 레퍼 아니고 포인터?
public:
	HumanB( std::string new_name );
	void setWeapon( Weapon &new_weapon_type );
	void attack();
	~HumanB();
};

#endif
