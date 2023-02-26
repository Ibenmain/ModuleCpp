/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:44:48 by ibenmain          #+#    #+#             */
/*   Updated: 2022/11/30 12:45:11 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int main()
{
    phonebook phone;
    std::string line;

    while (1)
    {
        std::cout << "Enter your choice (ADD, SEARCH or EXIT) : ";
        std::getline(std::cin, line);
        if (!std::cin.good())
            break;
        if (line == "ADD")
            phone.ADD();
        else if (line == "SEARCH")
            phone.SEARCH();
        else if (line == "EXIT")
            break ;
        else
            std::cout << "Wrong choice !" << std::endl;
    }
}
