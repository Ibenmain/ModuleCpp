/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 01:11:49 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/06 01:11:50 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
    type = t;
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string tp)
{
    type = tp;
}

const std::string& Weapon::getType()
{
    const std::string &var = type;
    return (var);
}
