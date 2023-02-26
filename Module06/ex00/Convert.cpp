/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:50:20 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/30 18:31:31 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
    str = "";
}

Convert::~Convert()
{
}

// Convert::Convert(const Convert& P)
// {
//     *this = P;
// }

// Convert&    Convert::operator=(const Convert& P)
// {
//     this->str = P.str;
//     return (*this);
// }

Convert::Convert(std::string s)
{
    this->str = s;
}

char    Convert::to_Char() const
{
    int d;
    if (str.length() == 1 && !std::isdigit(str[0])){
        char c = str[0];
        return c;
    }
    try
    {
        d = std::strtod(str.c_str(), NULL);
        if (d == INT_MAX || d == INT_MIN)
            throw DisplayMessage_IMP();
    }
    catch(const std::exception& e)
    {
        throw DisplayMessage_IMP();
    }
    if (!std::isprint(d))
        throw DisplayMessage_NON();
    if (d < 0 || d > 255)
        throw DisplayMessage_IMP();
    return (static_cast<char>(d));
}


int     Convert::to_Int() const
{
    try
    {
        int     i = std::strtod(str.c_str(), NULL);
        if (i == INT_MAX || i == INT_MIN)
            throw DisplayMessage_IMP();
        if (str.length() == 1 && !isdigit(str[0]))
            return (str[0]);
        return (i);
    }
    catch(const std::exception& e)
    {
        throw DisplayMessage_IMP();
    }
}

float   Convert::to_Float() const
{
    try
    {
        float     f = std::strtof(str.c_str(), NULL);
        if (str.length() == 1 && !isdigit(str[0]))
            return (str[0]);
        return (f);
    }
    catch(const std::exception& e)
    {
        throw DisplayMessage_IMP();
    }
}

double  Convert::to_Double() const
{
    try
    {
        double     d = std::strtod(str.c_str(), NULL);
        if (str.length() == 1 && !isdigit(str[0]))
            return (str[0]);
        return (d);
    }
    catch(const std::exception& e)
    {
        throw DisplayMessage_IMP();
    }
}

std::ostream& operator<<(std::ostream& output, const Convert& P)
{
    std::cout << "char: ";
    try
    {
        char    c = P.to_Char();
        output << "'" << c << "'" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "int: ";
    try
    {
        output <<static_cast<int>(P.to_Int()) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "float: ";
    try
    {
        output << P.to_Float();
        if (P.to_Float() - (int)P.to_Float() == 0)
            std::cout << ".0";
        std::cout << "f\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "double: ";
    try
    {
        output << P.to_Double();
        if (P.to_Double() - (int)P.to_Double() == 0)
            std::cout << ".0";
        std::cout << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (output);
}