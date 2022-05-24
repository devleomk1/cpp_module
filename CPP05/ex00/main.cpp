/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:25:04 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/24 19:34:31 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
	std::string			key;

	try
	{
		std::cin >> key;
		if (key == "cause")
			throw (std::exception());
	}
	catch(const std::exception& e)
	{
		std::cerr << YELLOW "🚨" << e.what() << RESET "\n";
	}
	std::cout << "Program End Normally" << std::endl;
	return (0);
}
