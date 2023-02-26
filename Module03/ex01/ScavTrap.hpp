/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:43:25 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/12 18:52:19 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &scav);
    ScavTrap &operator = (const ScavTrap &scav);
    ~ScavTrap();
    void guardGate();
    void     attack(const std::string& target);
};

#endif