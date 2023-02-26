/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:04:39 by ibenmain          #+#    #+#             */
/*   Updated: 2023/01/04 16:04:15 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    N = 0;
}

Span::~Span()
{
    
}

Span::Span(unsigned int n)
{
    this->N = n;
}

Span::Span(const Span &span)
{
    *this = span;
}

unsigned int    Span::size_vect()
{
    return (vect.size());
}

Span&   Span::operator=(const Span &span)
{
    this->N = span.N;
    this->vect = span.vect;
    return (*this);
}

void    Span::addNumber(int n)
{
    if (N == size_vect())
        throw NotFound();
    vect.push_back(n);
}

void    Span::addLotNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    if ((unsigned int )vect.size() + (end - start) > N)
        throw NotFound();
    while (start != end)
    {
        addNumber(*start);
        start++;
    }
}

std::vector<int>    Span::getVector()
{
    return (this->vect);
}

int     Span::shortestSpan()
{
    int i, j;
    int min_dist = INT_MAX;
    if ((int )vect.size() < 2)
        throw NotFound();
    for (i = 0; i < (int )vect.size(); i++){
        for (j = i + 1; j < (int )vect.size(); j++){
            if (min_dist > abs(vect[i] - vect[j]))
                min_dist = abs(vect[i] - vect[j]);
        }
    }
    return min_dist;
}

int     Span::longestSpan()
{
    int i, j;
    int min_dist = INT_MIN;
    if ((int )vect.size() < 2)
        throw NotFound();
    for (i = 0; i < (int )vect.size(); i++){
        for (j = i + 1; j < (int )vect.size(); j++){
            if (min_dist < abs(vect[i] - vect[j]))
                min_dist = abs(vect[i] - vect[j]);
        }
    }
    return min_dist;
}
