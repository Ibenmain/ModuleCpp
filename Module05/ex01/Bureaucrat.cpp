/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:15:01 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/24 15:43:26 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("unknown")
{
    std::cout << "Default constractor of Bureaucrat called\n";
    grade = 150;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destractor of Bureaucrat called\n";
}

Bureaucrat::Bureaucrat(std::string  const n, int    g) : name(n)
{
    std::cout << "Constractor parameterized of Bureaucrat called\n";
    if (g <= 0)
        throw GradeTooHighException();
    if (g > 150)
        throw GradeTooLowException();
    this->setGrade(g);
}

Bureaucrat::Bureaucrat(const Bureaucrat& berau)
{
    std::cout << "Copy constractor of Bureaucrat called\n";
    *this = berau;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& berau)
{
    std::cout << "Copy assignment operator of Bureaucrat called" << std::endl;
    if (this == &berau)
        return (*this);
    if (berau.grade <= 0)
        throw GradeTooHighException();
    if (berau.grade > 150)
        throw GradeTooLowException();
    this->setGrade(berau.grade);
    return (*this);
}

std::ostream    &operator<<(std::ostream& output, const Bureaucrat& berau)
{
    output << berau.getName() << ", bureaucrat grade is " << berau.getGrade() << std::endl;
    return (output);
}

void        Bureaucrat::increment()
{
    if (grade - 1 <= 0)
        throw GradeTooHighException();
    grade--;
}

void        Bureaucrat::decrement()
{
    if (grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
}

std::string Bureaucrat::getName() const
{
    return (name);
}

void        Bureaucrat::setGrade(int    g)
{
    this->grade = g;
}

int         Bureaucrat::getGrade() const
{
    return (grade);
}

void        Bureaucrat::signForm(Form &f)
{
    if (getGrade() <= f.getSgrade())
        std::cout << this->name << " signed " << f.getName() << std::endl;
    else
        std::cout << this->name << " couldn't sign " << f.getName() << " because " << "Grad too low\n";
}
