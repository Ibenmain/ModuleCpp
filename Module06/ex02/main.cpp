/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 19:15:28 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/30 21:47:02 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{;
    switch (rand() % 3)
    {
        case 0: return (new A);
        case 1: return (new B);
        case 2: return (new C);
        default: break;
    }
    return (NULL);
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A   &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A\n";
    }
    catch(const std::exception& e)
    {
        try
        {
            B   &b = dynamic_cast<B &>(p);
            (void)b;
            std::cout << "B\n";
        }
        catch(const std::exception& e)
        {
            try
            {
                C   &c = dynamic_cast<C &>(p);
                (void)c;
                std::cout << "C\n";
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
    }
 
}
int main()
{
    Base    *base;

    srand(time(NULL));
    base = generate();
    std::cout << "Pointer test\n";
    identify(base);
    std::cout << "Refference test\n";
    identify(*base);
}