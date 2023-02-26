/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:28:37 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/30 18:56:25 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

uintptr_t serialize(t_Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

t_Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<t_Data *>(raw));
}