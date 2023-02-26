/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:30:15 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/24 14:58:50 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat _berau("Alex", 5);
    try{
        std::cout << _berau;

        std::cout << "incrementing bureaucrat " << _berau.getName() << " three times..." << std::endl; 
        _berau.increment();
        _berau.increment();
        _berau.increment();
        std::cout << _berau;
    }
    catch (Bureaucrat::GradeTooHighException& e){
        std::cerr << e.what() << std::endl;
    }
}
