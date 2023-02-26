/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:18:20 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/23 19:50:44 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

#define TREE_ASCII "                         oxoxoo    ooxoo\n\
                       ooxoxo oo  oxoxooo\n\
                      oooo xxoxoo ooo ooox\n\
                      oxo o oxoxo  xoxxoxo\n\
                        oxo xooxoooo o ooo\n\
                           ooo\\oo\\  /o/o\n\
                             \\  \\/ /\n\
                              |   /\n\
                              |  |\n\
                              | D|\n\
                              |  |\n\
         /!!!!!!!!\\          |  |\n\
        |----------|   ______/____\\______"

class ShrubberyCreationForm : public Form
{
private:
    const std::string   target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string tg);
    ShrubberyCreationForm(const ShrubberyCreationForm& P);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& P);
    ~ShrubberyCreationForm();
    std::string getTarget() const;
    void    action_formul(Bureaucrat const &executor) const;
};
#endif