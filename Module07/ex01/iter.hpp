/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:47:43 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/31 15:25:02 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template    <typename T>
void    iter(T *arr, size_t len, void (*f)(const T &a))
{
    for (size_t i = 0;i < len;i++)
        f(arr[i]);
}

#endif