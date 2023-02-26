/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:06:55 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/07 15:06:56 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int ac, char **av)
{
    Harl    harl;

    if (ac != 2)
    {
        std::cout << "invalid argumente! \n";
        return (1);
    }
    harl.complain(av[1]);
   return 0;
}