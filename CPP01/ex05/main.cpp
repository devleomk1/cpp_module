/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 00:33:48 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/13 18:54:31 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl q;

	q.complain("debug");
	q.complain("info");
	q.complain("warning");
	q.complain("error");
	q.complain("harl");


	return (EXIT_SUCCESS);
}
