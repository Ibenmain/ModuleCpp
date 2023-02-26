/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 19:15:25 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/30 20:56:21 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>

class Base
{
public:
    Base();
    virtual ~Base();
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);
#endif