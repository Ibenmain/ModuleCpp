/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:58:59 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/17 21:19:32 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<< "Default constractor of WrongCat called\n";
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout<< "Default destractor of WrongCat called\n";
}

WrongCat::WrongCat(const WrongCat &anim)
{
    std::cout<< "Copy constractor of WrongCat called\n";
    *this = anim;
}

WrongCat&    WrongCat::operator=(const WrongCat& anim)
{
    std::cout<< "Assignment operator of WrongCat called\n";
    this->type = anim.type;
    return (*this);
}

void        WrongCat::makeSound() const
{
    std::cout<< "sound of WrongCat!\n";
}

void        WrongCat::setType(std::string Tyap)
{
    type = Tyap;
}

std::string WrongCat::getType(void) const
{
    return (type);
}
