/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 21:31:29 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/23 22:44:58 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
    std::cout << "Defaulte constractor of Intern\n";
}

Intern::~Intern()
{
    std::cout << "Defaulte destractor of Intern\n";
}

Intern::Intern(const Intern& S)
{
    (void)S;
   std::cout << "Copy constractor of Intern\n";
}

Intern&       Intern::operator=(const Intern& S)
{
    (void)S;
    std::cout << "Assignment operator of Intern\n";
    return (*this);
}

Form    *Intern::makeForm(std::string const &n_form, std::string const &target)
{

    const std::string forms[3] = {
        "ShrubberyCreationForm",
        "RobotomyRequestForm",
        "PresidentialPardonForm"
    };

    int i = 0;
    while (i < 3 && n_form != forms[i])
        i++;
    switch (i)
    {
        case 0:
            return (new ShrubberyCreationForm(target));
        case 1:
            return (new RobotomyRequestForm(target));
        case 2:
            return (new PresidentialPardonForm(target));
        case 3:
            throw NotKnownForm();
    }
    return (NULL);
}
