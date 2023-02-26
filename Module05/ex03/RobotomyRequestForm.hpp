/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:18:14 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/23 17:07:29 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
    const std::string   target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string tg);
    RobotomyRequestForm(const RobotomyRequestForm& P);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& P);
    ~RobotomyRequestForm();
    std::string getTarget() const;
    void    action_formul(Bureaucrat const &executor) const;
};

#endif