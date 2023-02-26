/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 23:00:58 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/17 20:57:54 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout<< "Default constractor of Animal called\n";
    type = "unknown";
}

Animal::~Animal()
{
    std::cout<< "Default destractor of Animal called\n";
}

Animal::Animal(const Animal& anim)
{
    std::cout<< "Copy constractor of Animal called\n";
    *this = anim;
}

Animal&    Animal::operator=(const Animal& anim)
{
    std::cout<< "Assignment operator of Animal called\n";
    this->type = anim.type;
    return (*this);
}

void        Animal::makeSound() const
{
    std::cout<< "cats don’t bark!\n";
}

void        Animal::setType(std::string t)
{
    type = t;
}

std::string Animal::getType(void) const
{
    return (type);
}
