/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 21:31:25 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/23 22:46:29 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
    
public:
    class NotKnownForm : public std::exception {
        public:
        const char * what () const throw(){
            return "Form not unknown";
        }
    };
    Intern();
    ~Intern();
    Intern(const Intern& S);
    Intern&       operator=(const Intern& S);
    Form    *makeForm(std::string const &n_form, std::string const &target);
};

#endif