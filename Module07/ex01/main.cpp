/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:02:38 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/31 15:35:03 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    f(const std::string &s)
{
    std::cout << s << std::endl;
}

int main()
{
    std::string strs[4] = {"My", "name", "is", "issam"};
    int x = sizeof(strs) / sizeof(std::string);
    iter(strs, x, f);
    return (0);
}