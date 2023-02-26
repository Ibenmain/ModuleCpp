/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:06:50 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/07 15:54:54 by ibenmain         ###   ########.fr       */
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
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.";
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
    void    (Harl::*func[5])()={
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    switch(x)
    {
        case 0:
            (this->*func[0])();
            break;
        case 1:
            (this->*func[1])();
            break;
        case 2:
            (this->*func[2])();
            break;
        case 3:
            (this->*func[3])();
            break;
        default:
            msg_err();
            break;
        
    }
}
