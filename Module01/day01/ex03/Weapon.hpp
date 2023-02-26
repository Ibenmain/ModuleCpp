/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 01:11:53 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/06 01:13:41 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string& getType();
        void setType(std::string tp);
        Weapon(std::string t);
        ~Weapon();
};
#endif