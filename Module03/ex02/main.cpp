/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:35:10 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/13 16:35:11 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap trap("issam");
    ScavTrap scav("benmaina");
    FragTrap bono("1337");
    std::cout << bono.getName() << std::endl;
    bono.setName("hakimi");
    std::cout << bono.getName() << std::endl;
    std::cout << trap.getName() << std::endl;
    std::cout << scav.getName() << std::endl;
    bono.highFiveGuys();
}