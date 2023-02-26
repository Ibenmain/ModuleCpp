/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:18:09 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/23 15:30:51 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), target("unknown")
{
    std::cout << "Defaulte constractor of PresidentialPardonForm\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string tg) : Form("PresidentialPardonForm", 25, 5), target(tg)
{
    std::cout << "Constractor parametrize of PresidentialPardonForm\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Defaulte destractor of PresidentialPardonForm\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& P) : Form(P)
{
    std::cout << "Copy constractor of PresidentialPardonForm\n";
    *this = P;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& P)
{
    std::cout << "Operator assignment of PresidentialPardonForm\n";
    if (this == &P)
        return (*this);
    Form::operator=(P);
    return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
    return (target); 
}

void    PresidentialPardonForm::action_formul(Bureaucrat const &executor) const
{
    std::cout << getTarget() << " has been pardoned by " << executor.getName() <<"." << std::endl; 
}
