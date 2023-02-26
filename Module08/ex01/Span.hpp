/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:12:36 by ibenmain          #+#    #+#             */
/*   Updated: 2023/01/04 15:47:50 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include<bits/stdc++.h>

class Span
{
private:
   unsigned int N;
   std::vector<int>   vect;
public:
    class NotFound : public std::exception
    {
        public:
            const char * what() const throw()
            {
                return ("No span can be found");
            }
    };
    Span();
    ~Span();
    Span(unsigned int n);
    Span(const Span &span);
    Span&   operator=(const Span &span);
    void    addNumber(int n);
    void    addLotNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2);
    int    shortestSpan();
    int    longestSpan();
    unsigned int    size_vect();
    std::vector<int>    getVector();
};

#endif