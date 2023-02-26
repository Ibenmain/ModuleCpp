/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:30:15 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/24 14:59:20 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat jaeskim("jaeskim", 10);

    try
    {
        std::cout << jaeskim;
        for (int i = 0; i < 9;i++)
            jaeskim.increment();
        std::cout << jaeskim;
        jaeskim.increment();
        std::cout << jaeskim;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    Form formA("a", 10, 10);
    Form formB("b", 10, 10);
    jaeskim.signForm(formA);
    for (int i = 0; i < 10;i++)
        jaeskim.decrement();
    jaeskim.signForm(formB);
    std::cout << formA;
    std::cout << formB;

    return 0;
}