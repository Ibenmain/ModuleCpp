/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 01:11:46 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/07 15:04:16 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon(" crude spiked club");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType(" some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon(" crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType(" some other type of club");
        jim.attack();
    }
    return 0;
}