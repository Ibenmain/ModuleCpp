/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:31:27 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/13 17:04:07 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constractor called\n";
    Name        = "None";
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string name)
{
    std::cout << "ClapTrap parameterized constractor called\n";
    Name = name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destractor called\n";
}

std::string ClapTrap::getName()
{
    return (Name);
}

void        ClapTrap::setName(std::string name)
{
    Name = name;
}

ClapTrap::ClapTrap(const ClapTrap& Clap)
{
    *this = Clap;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap& Clap)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    this->Name = Clap.Name;
    this->Hit_points = Clap.Hit_points;
    this->Energy_points = Clap.Energy_points;
    this->Attack_damage = Clap.Attack_damage;
    return (*this); 
}

void        ClapTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        std::cout << "ClapTrap " << Name << " attack " << target << ", causing " << Attack_damage << " points of damage!\n";
        Energy_points--;
    }
    else
        std::cout << "ClapTrap can't attack anyone\n";
}

void        ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        std::cout << Name << " loses "<< amount <<" hit points of damage !\n";
        amount > Hit_points ? Hit_points = 0: Hit_points -= amount;
    }

}

void        ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        Energy_points--;
        Hit_points += amount;
        std::cout << Name << " repaire "<< amount <<" hit points of damage !\n";
    }
    else
        std::cout << "can't repaire it self\n";
}