/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:03:41 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/19 16:09:28 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define SCAV_HP		        100
# define SCAV_EP		        50
# define SCAV_AD		        20
# define SCAV_MAX_HP	        1000

class ScavTrap : public ClapTrap
{
private:
public:
    ScavTrap( void );
    ScavTrap( const std::string name );
    ScavTrap( const ScavTrap &src );
    ScavTrap &operator=( const ScavTrap &src );
    ~ScavTrap();

    void attack( const std::string &target );
    void guardGate();
};

#endif