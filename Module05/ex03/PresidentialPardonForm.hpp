/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:18:05 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/23 11:31:23 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    const std::string   target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string tg);
    PresidentialPardonForm(const PresidentialPardonForm& P);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& P);
    ~PresidentialPardonForm();
    std::string getTarget() const;
    void    action_formul(Bureaucrat const &executor) const;
};


#endif