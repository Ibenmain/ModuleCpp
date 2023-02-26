/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:24:46 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/06 00:48:37 by ibenmain         ###   ########.fr       */
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
        Zombie(std::string n);
        ~Zombie();
        void   announce();
};

Zombie  *newZombie(std::string name);
void randomChump( std::string name);
#endif