/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:28:21 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/16 15:30:16 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
private:
    std::string     ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain& B);
    Brain      &operator=(const Brain& B);
    void        setidea(std::string idea, int index);
    std::string getidea(int index) const;
    void        makeSound() const;
};

#endif