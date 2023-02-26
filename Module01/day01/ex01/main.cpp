/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:53:31 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/06 00:56:13 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie;
    int i = 0;

    zombie = zombieHorde(10, "foo");
    while (i < 10)
    {
        zombie->announce();
        i++;
    }
    delete[] zombie;
    // system("leaks brainz_horde");
}