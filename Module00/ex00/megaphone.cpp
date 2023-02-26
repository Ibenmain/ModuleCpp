/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:34:17 by ibenmain          #+#    #+#             */
/*   Updated: 2022/11/30 11:41:57 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstdio>
#include <cstring>

int main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	while (av[i])
	{
		std::string str = av[i];
		for (int j = 0; j < (int)str.size() ; j++)
			putchar(toupper(av[i][j]));
		if (av[i + 1])
			std::cout << " ";
		i++;
	}
	return (0);
}
