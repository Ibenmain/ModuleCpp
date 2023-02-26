/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:09:04 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/17 21:10:25 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<< "Default constractor of WrongAnimal called\n";
    type = "unknown";
}

WrongAnimal::~WrongAnimal()
{
    std::cout<< "Default destractor of WrongAnimal called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& anim)
{
    std::cout<< "Copy constractor of WrongAnimal called\n";
    *this = anim;
}

WrongAnimal&    WrongAnimal::operator=(const WrongAnimal& anim)
{
    std::cout<< "Assignment operator of WrongAnimal called\n";
    this->type = anim.type;
    return (*this);
}

void        WrongAnimal::makeSound() const
{
    std::cout<< "cats don’t bark!\n";
}

void        WrongAnimal::setType(std::string t)
{
    type = t;
}

std::string WrongAnimal::getType(void) const
{
    return (type);
}
