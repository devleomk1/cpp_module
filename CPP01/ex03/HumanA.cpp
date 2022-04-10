/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 14:40:07 by devleo            #+#    #+#             */
/*   Updated: 2022/04/10 18:46:03 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//초기화 리스트
HumanA::HumanA( std::string new_name, Weapon &new_weapon_type ) : name(new_name), weapon_type(new_weapon_type)
{
    //왜 초기화 리스트는 되고
    //생성자 내부에서 초기화하는건 안되는 걸까요?
}

void HumanA::attack()
{
	std::cout << GREEN << this->name << RESET << " attacks with their " << this->weapon_type.getType() << std::endl;
}

HumanA::~HumanA()
{
}
