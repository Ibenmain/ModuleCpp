/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 11:46:44 by ibenmain          #+#    #+#             */
/*   Updated: 2023/01/01 15:38:18 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template    <typename T>
class Array
{
private:
    unsigned int    siz;
    T               *tab;
public:
    class OutOfRang : public std::exception
    {
        public:
        const char * what() const throw()
        {
            return ("index out of rang");
        }
    };
    Array()
    {
        siz    = 0;
        tab     = NULL; 
    }
    ~Array()
    {
        if (tab)
            delete[] tab;
    }
    Array(unsigned int s) : siz(s), tab(new T[s]) {};
    Array(const Array   &arr)
    {
        this->siz = arr.siz;
        this->tab = new T[siz];
        for (unsigned int i = 0; i < arr.siz; i++)
        {
            this->tab[i] = arr.tab[i];
        }
    }
    Array&  operator=(const Array &ptr)
    {
        if (this != &ptr)
		{
			if(this->tab)
				delete[] tab;
			this->siz = ptr.siz;
			this->tab = new T[ptr.siz];
			for (unsigned int i = 0; i < ptr.siz; i++)
				this->tab[i] = ptr.tab[i];
		}
		return *this;
    }
    T& operator[](unsigned int index)
    {
    	if (index >= this->siz)
    		throw OutOfRang();
    	return this->tab[index];
    }
    unsigned int    size() const
    {
        return (siz);
    }
};

#endif