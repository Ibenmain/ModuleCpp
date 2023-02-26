/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:32:10 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/13 17:04:38 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called\n";
    Name        = "None";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "ScavTrap parameterized constractor called\n";
    Name = name;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scav) : ClapTrap(scav)
{
    *this = scav;
}

ScavTrap&    ScavTrap::operator = (const ScavTrap &scav)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    this->Name = scav.Name;
    this->Hit_points = scav.Hit_points;
    this->Energy_points = scav.Energy_points;
    this->Attack_damage = scav.Attack_damage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destractor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap guardGate !!" << std::endl;
}

void        ScavTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        std::cout << "ScavTrap " << Name << " attack " << target << ", causing " << Attack_damage << " points of damage!\n";
        Energy_points--;
    }
    else
        std::cout << "ScavTrap can't attack anyone\n";
}