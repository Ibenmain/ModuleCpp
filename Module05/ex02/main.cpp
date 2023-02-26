/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:30:15 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/24 15:00:03 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

    Bureaucrat _bureaucrat("lprof", 10);
    ShrubberyCreationForm _shrubbery("home");

    _bureaucrat.executeForm(_shrubbery);
    _bureaucrat.signForm(_shrubbery);
    _bureaucrat.executeForm(_shrubbery);
    _shrubbery.action_formul(_bureaucrat);

    return 0;
}