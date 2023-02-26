/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:55:45 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/07 14:55:46 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cctype>
#include <cstdio>
#include <cstring>

int main(int ac, char **av)
{
    std::ifstream   file(av[1]);
    std::string     line;
    std::string     tmp;
    std::string     cpy;
    std::string     s1;
    std::string     s2;
    int             index;

    if (ac != 4)
        return (std::cout << "invalid arguments", 1);
    tmp = av[1];
    index = -1;
    if(file.is_open())
    {
        std::ofstream myfile(tmp + ".replace");
        while (getline(file, line))
        {
            s1 = av[2];
            s2 = av[3];
            I1:
            index++;
            index = line.find(av[2], index);
            if(s1.empty())
                break;
            if (index != -1 && s1 != s2)
            {
                if (index == 0)
                    cpy = av[3] + line.substr(s1.length(), (line.length() - s1.length()));
                else
                    cpy = line.substr(0, index) + av[3] + line.substr(index + s1.length(), line.length());
                line = cpy;
                goto I1;
            }
            myfile << line << std::endl;
        }
    }
    else
        std::cout << "Error file not found!\n";
    return (0);
}