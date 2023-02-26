/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:59:02 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/16 12:23:19 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    std::string type;
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat& anim);
    WrongCat      &operator=(const WrongCat& anim);
    void        makeSound() const;
    void        setType(std::string Tyap);
    std::string getType(void) const;
};

#endif