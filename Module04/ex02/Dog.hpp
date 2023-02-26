/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 23:01:13 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/16 18:17:25 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain   *B;
public:
    Dog();
    ~Dog();
    Dog(const Dog& anim);
    Dog      &operator=(const Dog& anim);
    void        makeSound() const;
};

#endif