/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:24:41 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/06 00:51:23 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n)
{
    name = n;
}

Zombie::~Zombie()
{
    std::cout<< name << ": Destroyed" << std::endl;
}

Zombie  *newZombie(std::string name)
{
    Zombie *z = new Zombie(name);
    return (z);
}

void randomChump(std::string name)
{
    /* Zombie newZombie(name); */
    Zombie *z = newZombie(name);
    z->announce();
    z->~Zombie();
}

void Zombie::announce(void)
{
    std::cout<< name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
