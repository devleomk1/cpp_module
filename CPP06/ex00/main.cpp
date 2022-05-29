/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 01:44:12 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/29 16:04:57 by jisokang         ###   ########.fr       */
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
	try
	{
		Convert con(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
