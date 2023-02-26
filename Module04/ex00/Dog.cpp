/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 23:01:10 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/17 21:01:14 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout<< "Default constractor of Dog called\n";
    type = "Dog";
}

Dog::~Dog()
{
    std::cout<< "Default destractor of Dog called\n";
}

Dog::Dog(const Dog& anim)
{
    std::cout<< "Copy constractor of Dog called\n";
    *this = anim;
}

Dog&    Dog::operator=(const Dog& anim)
{
    std::cout<< "Assignment operator of Dog called\n";
    this->type = anim.type;
    return (*this);
}

void        Dog::makeSound() const
{
    std::cout<< "Howwwwwwwwwwwww Howwwwwwwwwwww!\n";
}
