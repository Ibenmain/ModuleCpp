/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 23:01:03 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/17 21:00:22 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<< "Default constractor of Cat called\n";
    type = "Cat";
}

Cat::~Cat()
{
    std::cout<< "Default destractor of Cat called\n";
}

Cat::Cat(const Cat& anim)
{
    std::cout<< "Copy constractor of Cat called\n";
    *this = anim;
}

Cat&    Cat::operator=(const Cat& anim)
{
    std::cout<< "Assignment operator of Cat called\n";
    this->type = anim.type;
    return (*this);
}

void        Cat::makeSound() const
{
    std::cout<< "Meawwwwwwwwwwww Meawwwwwwwwww!\n";
}


