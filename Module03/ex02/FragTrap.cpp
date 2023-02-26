/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:35:04 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/13 16:35:05 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constractor called\n";
    Name        = "None";
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "FragTrap parametrized constractor called\n";
    Name        = name;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &scav) : ClapTrap(scav)
{
    std::cout << "FragTrap copy constractor called\n";
    *this = scav;

}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destractor called\n";

}

FragTrap    &FragTrap::operator = (const FragTrap &scav)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    this->Name = scav.Name;
    this->Hit_points = scav.Hit_points;
    this->Energy_points = scav.Energy_points;
    this->Attack_damage = scav.Attack_damage;
    return (*this);
}

void        FragTrap::highFiveGuys(void)
{
    std::cout << "High five guys" << std::endl;
}

void        FragTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        std::cout << "FragTrap " << Name << " attack " << target << ", causing " << Attack_damage << " points of damage!\n";
        Energy_points--;
    }
    else
        std::cout << "FragTrap can't attack anyone\n";
}
