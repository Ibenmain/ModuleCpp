/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:22:25 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/07 16:36:16 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void    msg_err()
{
    std::cout << "[ Probably complaining about insignificant problems ]\n";
}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n"; 
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n"<< std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]\n"; 
    std::cout << "I cannot believe adding extra bacon costs more money.\n";
    std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"<< std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free.\n";
    std::cout << "I've been coming for years whereas you started working here since last month.\n"<< std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n"<< std::endl;
}

int ft_index(std::string levl)
{
    int i = 0;
    std::string levle[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (i < 4 && levle[i] != levl)
        i++;
    return (i);
}

void    Harl::complain(std::string level)
{
    int x;
    x = ft_index(level);
    void    (Harl::*func[4])()={
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    switch(x)
    {
        case 0:
            (this->*func[0])();
        case 1:
            (this->*func[1])();
        case 2:
            (this->*func[2])();
        case 3:
            (this->*func[3])();
            break;
        default:
            msg_err();
            break;
        
    }
}
