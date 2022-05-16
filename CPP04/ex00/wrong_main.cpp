/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong_main.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:15:03 by jisokang          #+#    #+#             */
/*   Updated: 2022/05/16 14:04:04 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    WrongAnimal *meta = new WrongAnimal();
    WrongAnimal *i = new WrongCat();

    std::cout << "[meta->getType()]: " << meta->getType() << std::endl;
    std::cout << "[i->getType()]: " << i->getType() << std::endl;

    meta->makeSound();
    i->makeSound();
    //WrongCat 입장에서는 부모의 makeSound()인지 자신의 makeSound()인지 확인할 수 없다!

    std::cout << "delete meta: ";
    delete meta;
    std::cout << "delete i: ";
    delete i;
    return 0;
}