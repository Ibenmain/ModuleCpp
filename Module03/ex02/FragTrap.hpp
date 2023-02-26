/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:35:07 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/13 16:35:08 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &scav);
    ~FragTrap();
    FragTrap    &operator = (const FragTrap &scav);
    void        highFiveGuys(void);
    void        attack(const std::string& target);
};

#endif