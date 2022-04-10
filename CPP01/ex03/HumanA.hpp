/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:18:48 by devleo            #+#    #+#             */
/*   Updated: 2022/04/11 03:22:58 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
    std::string	name;
    Weapon		&weapon_type;   //레퍼런스를 사용하는 법을 배워봅시다.
public:
    HumanA( std::string new_name, Weapon &new_weapon_type );
    void attack();
    ~HumanA();
};

#endif
