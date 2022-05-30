/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 01:44:12 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/30 17:20:44 by jisokang         ###   ########.fr       */
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
		Convert convert(argv[1]);

		convert.printChar();
		convert.printInt();
		convert.printFloat();
		convert.printDouble();

	}
	catch(const std::exception& e)
	{
		std::cerr << "[🔔Execption]: " YELLOW << e.what() << RESET ". You can use like this, ex) 42, 0, -42.42f, inf, nan\n";
		return (1);
	}

	return (0);
}
