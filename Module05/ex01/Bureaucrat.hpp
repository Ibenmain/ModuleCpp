/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:55:33 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/22 13:49:12 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const  std::string  name;
    int                 grade;
public:
    class GradeTooHighException : public std::exception
    {
        public :
            const char* what() const throw()
            {
                return "Grade too high excption!";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public :
            const char* what() const throw()
            {
                return "Grade too low excption!";
            }
    };
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& berau);
    Bureaucrat(std::string  const n, int    g);
    Bureaucrat& operator=(const Bureaucrat& berau);
    std::string getName() const;
    void        setGrade(int g);
    int         getGrade() const;
    void        increment();
    void        decrement();
    void        signForm(Form &f);
};
std::ostream    &operator<<(std::ostream &output, const Bureaucrat &bureau);

#endif