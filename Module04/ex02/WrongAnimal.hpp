/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:09:07 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/16 12:28:03 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include "Animal.hpp"

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal& anim);
    WrongAnimal      &operator=(const WrongAnimal& anim);
    void        makeSound() const;
    void        setType(std::string Tyap);
    virtual std::string getType(void) const;

};

#endif