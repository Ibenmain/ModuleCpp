/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 23:37:17 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/13 16:33:32 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
protected:
    std::string         Name;
    unsigned int         Hit_points;
    unsigned int         Energy_points;
    unsigned int         Attack_damage;
public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(const ClapTrap& Clap);
    ClapTrap(const std::string name);
    ClapTrap    &operator=(const ClapTrap& Clap);
    void        attack(const std::string& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    void        setName(std::string name);
    std::string getName();
};
#endif