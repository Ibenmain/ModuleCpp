/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:18:12 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/23 18:49:45 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), target("unknown")
{
    std::cout << "Defaulte constractor of RobotomyRequestForm\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string tg) : Form("RobotomyRequestForm", 72, 45), target(tg)
{
    std::cout << "Constractor parametrize of RobotomyRequestForm\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Defaulte destractor of RobotomyRequestForm\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& P) : Form(P)
{
    std::cout << "Copy constractor of RobotomyRequestForm\n";
    *this = P;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& P)
{
    std::cout << "Operator assignment of RobotomyRequestForm\n";
    if (this == &P)
        return (*this);
    Form::operator=(P);
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
    return (target); 
}

void    RobotomyRequestForm::action_formul(Bureaucrat const &executor) const
{
    for (int i = 0;i < 10;i++)
    {
        if (i % 2 == 0)
            std::cout << executor.getName() << " has been robotomized successfully!" << std::endl;
        else
            std::cout << "The robotomy of " << executor.getName() << "failed!" << std::endl;
    }
}
