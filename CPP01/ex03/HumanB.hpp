/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:46:15 by jisokang          #+#    #+#             */
/*   Updated: 2022/04/10 19:03:12 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

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
