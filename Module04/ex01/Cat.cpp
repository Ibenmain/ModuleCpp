/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 23:01:03 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/17 21:17:01 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    std::cout<< "Default constractor of Cat called\n";
    this->type = "Cat";
    B = new Brain();
}

Cat::~Cat()
{
    std::cout<< "Default destractor of Cat called\n";
    delete B;
}

Cat::Cat(const Cat& anim)
{
    std::cout<< "Copy constractor of Cat called\n";
    *this = anim;
}

Cat&    Cat::operator=(const Cat& anim)
{
    std::cout<< "Assignment operator of Cat called\n";
    if (this->B)
        this->~Cat();
    this->type = anim.type;
    this->B = new Brain(*anim.B);
    return (*this);
}

void        Cat::makeSound() const
{
    std::cout<< "Meawwwwwwwwwwww Meawwwwwwwwww!\n";
}
