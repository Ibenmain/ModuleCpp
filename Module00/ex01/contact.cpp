/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:44:41 by ibenmain          #+#    #+#             */
/*   Updated: 2022/11/30 11:44:42 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::setFirstName(std::string f_name)
{
    first_name = f_name;   
}

std::string Contact::getFirstName()
{
    return (first_name);
}

void Contact::setLastName(std::string l_name)
{
    last_name = l_name;
}

std::string Contact::getLastNmae()
{
    return (last_name);
}

void Contact::setNikName(std::string n_name)
{
    nickname = n_name;
}

std::string Contact::getNikNmae()
{
    return (nickname);
}

void Contact::setPhoneNumber(std::string p_nb)
{
    phone_number = p_nb;
}

std::string Contact::getPhoneNumber()
{
    return (phone_number);
}

void Contact::setDarkestSecret(std::string d_secret)
{
    darkest_secret = d_secret;
}

std::string Contact::getDarkestSecret()
{
    return (darkest_secret);
}