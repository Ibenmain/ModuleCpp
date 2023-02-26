/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:11:08 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/17 21:14:10 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
    std::cout<< "Default constractor of Brain called\n";
    for (int index = 0;index < 100;index++)
        ideas[index] = "idea";
}

Brain::~Brain()
{
    std::cout<< "Default destractor of Brain called\n";
}

Brain::Brain(const Brain& B)
{
    std::cout << "Copy constractor of Brain called\n";
    *this = B;
}

Brain&    Brain::operator=(const Brain& B)
{
    std::cout << "Copy assignment operator of Brain called\n";
    for (int i = 0;i < 100;i++)
        ideas[i] = B.ideas[i];
    return (*this);
}

void        Brain::makeSound() const
{
    std::cout<< "cats don’t bark!\n";
}

void        Brain::setidea(std::string idea, int index)
{
    ideas[index] = idea;
}

std::string Brain::getidea(int index) const
{
    return (ideas[index]);
}