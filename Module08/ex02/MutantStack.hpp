/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:43:09 by ibenmain          #+#    #+#             */
/*   Updated: 2023/01/04 20:26:45 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP
#include <bits/stdc++.h>

template    <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator    iterator;
    MutantStack()
    {
    }
    MutantStack(MutantStack const &mut) : std::stack<T>(mut)
    {
    }
    MutantStack const &operator = (MutantStack const &mutant)
    {
        this->c = mutant.c;
        return (*this);
    }
    iterator    __begin()
    {
        return(this->c.begin());
    }
    iterator    __end()
    {
        return(this->c.end());
    }
    ~MutantStack(){};
};

#endif