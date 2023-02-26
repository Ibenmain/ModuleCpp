/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:12:44 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/31 14:38:04 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template    <typename T>
void    swap(T &x, T &y)   
{
    T   tmp;
    
    tmp = x;
    x = y;
    y = tmp;
}

template    <typename T>
T    min(T x, T y)
{
    return (x < y) ? x : y;
}

template    <typename T>
T    max(T x, T y)
{
    return (x > y) ? x : y;
}
#endif