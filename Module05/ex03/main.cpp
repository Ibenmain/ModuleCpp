/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:30:15 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/24 14:28:10 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{

    Bureaucrat _b("issam", 1);
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
    rrf->action_formul(_b);
    return 0;
}