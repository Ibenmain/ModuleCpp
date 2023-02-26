/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:44:44 by ibenmain          #+#    #+#             */
/*   Updated: 2022/11/30 12:19:59 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <cctype>
# include <cstdio>
# include <cstring>
# include <string>
# include <iomanip>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    void setFirstName(std::string f_name);
    std::string getFirstName();
    void setLastName(std::string l_name);
    std::string getLastNmae();
    void setNikName(std::string n_name);
    std::string getNikNmae();
    void setPhoneNumber(std::string p_nb);
    std::string getPhoneNumber();
    void setDarkestSecret(std::string d_sercet);
    std::string getDarkestSecret();
};

#endif