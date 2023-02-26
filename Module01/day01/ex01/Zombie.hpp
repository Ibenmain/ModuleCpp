/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:53:38 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/06 01:04:06 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <cctype>
# include <cstdio>
# include <cstring>
# include <iomanip>
# include <string>

class Zombie
{
    private:
        std::string name;
    public:
        void    setZombie(std::string n);
        void    announce();
        Zombie();
        ~Zombie();
};

Zombie *zombieHorde(int N, std::string name);
#endif