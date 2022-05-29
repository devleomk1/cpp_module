/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 01:44:12 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/29 09:54:35 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"

int main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cout << YELLOW "🔔Usage: ./convert [ INPUT ]" RESET << std::endl;
		return (1);
	}

	double	value;
	int		i;
	value = std::stod(argv[1]);
	i = std::stoi(argv[1]);
	Convert con(argv[1]);


	return (0);
}
