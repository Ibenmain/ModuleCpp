/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:53:34 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/06 01:05:47 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << name << ": Destryed" << std::endl;
}

void    Zombie::setZombie(std::string n)
{
    name = n;
}

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombie;
    Zombie *tmp;

    zombie = new Zombie[N];
    tmp = zombie;
    for (int i = 0; i < N; i++)
    {
        tmp->setZombie(name);
        tmp++;
    }
    return (zombie);
}

void    Zombie::announce()
{
    std::cout<< name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}