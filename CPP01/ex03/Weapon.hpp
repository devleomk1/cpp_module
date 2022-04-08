/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devleo <devleo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:34:37 by devleo            #+#    #+#             */
/*   Updated: 2022/04/04 18:02:00 by devleo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include "color.hpp"

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string type);
    const std::string *getType();
    void setType(std::string new_type);
    ~Weapon();
};

#endif