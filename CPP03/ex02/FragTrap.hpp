/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 23:56:25 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/15 00:03:31 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# define FRAG_HP		        100
# define FRAG_EP		        100
# define FRAG_AD		        30
# define FRAG_MAX_HP	        1000

class FragTrap : public ClapTrap
{
private:
public:
    FragTrap( void );
    FragTrap( const std::string name );
    FragTrap( const FragTrap &src );
    FragTrap &operator=( const FragTrap &src );
    ~FragTrap();

    void highFivesGuys( void );
};

#endif