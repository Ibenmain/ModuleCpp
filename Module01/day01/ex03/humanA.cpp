/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 01:11:35 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/07 15:02:11 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w):name(n),we(w)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << name << " attacks with their" << we.getType() << std::endl;
}