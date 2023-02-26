/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:31:07 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/22 14:03:40 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("unknown"), grad_s(150), grad_e(150)
{
    std::cout << "Default constractor of Form called\n";
    sig = 0;
}

Form::~Form()
{
    std::cout << "Default destractor of Form called\n";   
}

Form::Form(const std::string n, const int gr_s, const int gr_e) : name(n), grad_s(gr_s), grad_e(gr_e)
{
    std::cout << "Constractor parameterized of Form called\n";
     if (gr_s <= 0 || gr_e <= 0)
        throw GradeTooHighException();
    if (gr_s > 150 || gr_e > 150)
        throw GradeTooLowException();
    sig = 0;
}

Form::Form(const Form& f) : name(f.name), grad_s(f.grad_s), grad_e(f.grad_e) 
{
    std::cout << "Copy constractor of Form called\n";
    this->sig = f.sig;
}

Form&       Form::operator=(const Form& f)
{
    std::cout << "Assignment operator  of Form called\n";
    if (this == &f)
        return (*this);
    if (f.getEgrade() <= 0 || f.getSgrade() <= 0)
        throw GradeTooHighException();
    if (f.getEgrade() > 150 || f.getSgrade() > 150)
        throw GradeTooLowException();
    this->sig = f.sig;
    return (*this);
}

void        Form::beSinged(const Bureaucrat& b)
{
    if (b.getGrade() <= grad_s)
        throw Form::GradeTooHighException();
    sig = 1;
}

std::string Form::getName()   const
{
    return (name);
}

bool        Form::getIndic()   const
{
    return (sig);
}

int         Form::getSgrade()   const
{
    return (grad_s);
}

int         Form::getEgrade()   const
{
    return (grad_e);
}

std::ostream &operator << (std::ostream& output, const Form& f)
{
    output << "-----------------Form--------------------" << std::endl;
    output << "Form name : " << f.getName() << std::endl;
    output << "Is signed : " << f.getIndic() << std::endl;
    output << "Grade to signed it : " << f.getSgrade() << std::endl;
    output << "Grade to execute it : " << f.getEgrade() << std::endl;
    output << "-----------------------------------------" << std::endl;
    return (output);
}
