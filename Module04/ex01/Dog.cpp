/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 23:01:10 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/17 21:09:18 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout<< "Default constractor of Dog called\n";
    this->type = "Dog";
    this->B = new Brain();
    
}

Dog::~Dog()
{
    std::cout<< "Default destractor of Dog called\n";
    delete B;
}

Dog::Dog(const Dog& anim)
{
    std::cout<< "Copy constractor of Dog called\n";
    *this = anim;
}

Dog&    Dog::operator=(const Dog& anim)
{
    
    std::cout<< "Assignment operator of Dog called\n";
    if (this->B)
        this->~Dog();
    this->type = anim.type;
    this->B = new Brain(*anim.B);
    return (*this);
}

void        Dog::makeSound() const
{
    std::cout<< "Howwwwwwwwwwwww Howwwwwwwwwwww!\n";
}
