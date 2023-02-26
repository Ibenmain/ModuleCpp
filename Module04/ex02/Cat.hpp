/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 23:01:06 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/16 17:10:01 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain   *B;    
public:
    Cat();
    ~Cat();
    Cat(const Cat& anim);
    Cat      &operator=(const Cat& anim);
    void        makeSound() const;
};

#endif