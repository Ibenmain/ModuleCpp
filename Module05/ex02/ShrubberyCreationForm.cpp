/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:18:17 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/24 14:29:10 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 25, 5), target("unknown")
{
    std::cout << "Defaulte constractor of ShrubberyCreationForm\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string tg) : Form("ShrubberyCreationForm", 25, 5), target(tg)
{
    std::cout << "Constractor parametrize of ShrubberyCreationForm\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Defaulte destractor of ShrubberyCreationForm\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& P) : Form(P)
{
    std::cout << "Copy constractor of ShrubberyCreationForm\n";
    *this = P;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& P)
{
    std::cout << "Operator assignment of ShrubberyCreationForm\n";
    if (this == &P)
        return (*this);
    Form::operator=(P);
    return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (target); 
}

void    ShrubberyCreationForm::action_formul(Bureaucrat const &executor) const
{

    std::ofstream   file(executor.getName() + "_shrubbery");
    if (file.is_open())
        file << TREE_ASCII;
    else
        std::cout << "Can't open file!\n";
    std::cout<<"hi\n";
}
