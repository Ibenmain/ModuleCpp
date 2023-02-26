/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:52:50 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/12 19:06:39 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("issam");
    ScavTrap b;

    b.setName("benmaina");
    std::cout << a.getName() << std::endl;
    std::cout << b.getName() << std::endl;
    b.attack(a.getName());
}
