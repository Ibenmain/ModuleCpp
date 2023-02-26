/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:28:35 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/30 18:56:34 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
typedef struct  s_Data
{
    std::string str;
    int         x;
}       t_Data;

uintptr_t serialize(t_Data* ptr);
t_Data* deserialize(uintptr_t raw);
#endif