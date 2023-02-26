/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:52:50 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/13 17:11:49 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap bono("issam");

    a.setName("benmaina");
    std::cout << a.getName() << std::endl;
    std::cout << bono.getName() << std::endl;
    bono.attack(a.getName());
}