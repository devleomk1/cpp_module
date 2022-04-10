/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:34:37 by devleo            #+#    #+#             */
/*   Updated: 2022/04/11 03:25:28 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include "color.hpp"

class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string type);
	const std::string &getType();		//const는 무엇인가?
	void setType(std::string new_type);
	~Weapon();
};

#endif
