/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:08:43 by ibenmain          #+#    #+#             */
/*   Updated: 2023/01/04 22:15:41 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(10);
    v.push_back(20);
    try
    {
        easyfind(v, 10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
