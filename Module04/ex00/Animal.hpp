/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 23:01:01 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/15 16:48:12 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
    std::string     type;
public:
    Animal();
    ~Animal();
    Animal(const Animal& anim);
    Animal      &operator=(const Animal& anim);
    void        setType(std::string t);
    std::string getType(void) const;
    virtual void        makeSound() const;
};

#endif