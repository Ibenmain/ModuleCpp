/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:44:56 by ibenmain          #+#    #+#             */
/*   Updated: 2022/11/30 11:49:47 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "contact.hpp"

class phonebook
{
private:
    Contact contact[8];
    int index;
    int count;

public:
    void ADD();
    void SEARCH();
    phonebook();
    ~phonebook();
};
#endif