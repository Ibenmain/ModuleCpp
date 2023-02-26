/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 11:46:47 by ibenmain          #+#    #+#             */
/*   Updated: 2023/01/01 15:37:26 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array <int>arr(6);
	for(int i=0; i < 6; i++)
		arr[i] = i;
    for (size_t i = 0; i < 6; i++)
    {
        try
        {
            std::cout << arr[i] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}