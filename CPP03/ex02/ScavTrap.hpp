/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:03:41 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/14 22:20:42 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define SCAV_HP		        100
# define SCAV_EP		        50
# define SCAV_AD		        20
# define SCAV_MAX_HP	        1000

// default class는 private???
// class ScavTrap : ClapTrap
class ScavTrap : public ClapTrap
{
private:
public:
    ScavTrap( void );
    ScavTrap( const std::string name );
    ScavTrap( const ScavTrap &src );
    ScavTrap &operator=( const ScavTrap &src );
    ~ScavTrap();

    void guardGate();
};

#endif