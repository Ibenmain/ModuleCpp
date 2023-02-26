/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:31:04 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/22 14:07:58 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string   name;
    bool                sig;
    const int           grad_s;
    const int           grad_e;
public:
    class GradeTooHighException : public std::exception
    {
        public:
            const   char * what() const throw(){
                return ("Grade too high exception");
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const   char * what() const throw(){
                return ("grade too low exception");
            }
    };
    Form();
    ~Form();
    Form(const Form& f);
    Form(const std::string n, const int gr_r, const int gr_e);
    Form&       operator=(const Form& f);
    void        beSinged(const Bureaucrat& b);
    std::string getName()   const;
    bool        getIndic()   const;
    int         getSgrade()   const;
    int         getEgrade()   const;
};
std::ostream&   operator<<(std::ostream &output, const Form& f);
#endif