/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:08:40 by ibenmain          #+#    #+#             */
/*   Updated: 2023/01/04 22:18:38 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include<bits/stdc++.h>

class NotFound : public std::exception
{
    const char *what() const throw()
    {
        return ( "Element not found.");  
    }
};

template    <typename T>
void    easyfind(T vect, int n)
{
    typename    T::iterator    it;
    it = std::find(vect.begin(), vect.end(), n);
    if(it != vect.end())
    {
        std::cout << "Element is " << *it << std::endl;
    }
    else
        throw NotFound();
}

#endif