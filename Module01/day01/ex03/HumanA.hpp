/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 01:11:38 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/06 01:34:20 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon  &we;
    public:
        void    attack();
        HumanA(std::string n, Weapon &w);
        ~HumanA();
};
#endif