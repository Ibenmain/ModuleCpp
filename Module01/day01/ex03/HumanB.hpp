/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 01:11:43 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/06 01:33:33 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon      *we;
    public:
        void    setWeapon(Weapon &w);
        void    attack();
        HumanB(std::string n);
        ~HumanB(); 
};
#endif