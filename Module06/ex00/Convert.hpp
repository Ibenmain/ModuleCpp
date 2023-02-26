/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:50:24 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/30 18:23:12 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <exception>
#include <cmath>
#include <cctype>

class Convert
{
private:
    std::string str;
public:
    class DisplayMessage_NON : public std::exception
    {
        const char *what() const throw(){
            return ("Non displayble");
        }
    };
        class DisplayMessage_IMP : public std::exception
    {
        const char *what() const throw(){
            return ("Impossible");
        }
    };
    Convert();
    ~Convert();
    Convert(std::string s);
    // Convert(const Convert& P);
    // Convert&    operator=(const Convert& P);
    char    to_Char() const;
    int    to_Int() const;
    float   to_Float() const;
    double  to_Double() const;
};

std::ostream& operator<<(std::ostream& output, const Convert& P);
#endif