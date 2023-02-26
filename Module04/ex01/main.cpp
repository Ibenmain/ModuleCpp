/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 23:01:16 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/17 21:09:54 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    Animal * meta[6];
    int i;

    for(i = 0; i < 3; i++)
        meta[i] = new Dog();
    for(; i< 6; i++)
        meta[i] = new Cat();

    for(i = 0; i < 6; i++)
    {
        std::cout << "Type is : " << meta[i]->getType() << std::endl;
        std::cout << "Sound is: ";
		meta[i]->makeSound();
    }

    for(int j = 0; j < 6; j++)
        delete meta[j];

    //system("leaks Animal");
}