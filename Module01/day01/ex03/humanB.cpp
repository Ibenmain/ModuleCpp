/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 01:11:40 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/07 15:01:09 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon &w)
{
    we = &w;
}

void    HumanB::attack()
{
     if (!we)
        std::cout << "The weapon to attack is NULL" << std::endl;
    else
        std::cout<< name << " attacks with their" << (*we).getType() <<std::endl;
}

HumanB::HumanB(std::string n):name(n), we(NULL)
{
}

HumanB::~HumanB()
{
}