/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:04:30 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/07 15:05:21 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <fstream>
# include <cctype>
# include <cstdio>
# include <cstring>

class Harl
{
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
public:
    Harl();
    ~Harl();
    void    complain(std::string level);
};
#endif