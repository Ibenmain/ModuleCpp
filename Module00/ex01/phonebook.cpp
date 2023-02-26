/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:44:52 by ibenmain          #+#    #+#             */
/*   Updated: 2022/11/30 12:40:32 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int ft_atoi(std::string str)
{
	int	i;
	int	n;
	int	signe;

	i = 0;
	n = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i++] - '0';
	}
	if (str[i] == '\0' && str[i - 1] == '-')
		return (-1);
	if (str[i] && (str[i] < '0' || str[i] > '9'))
		return (-1);
	return (n * signe);
}

phonebook::phonebook()
{
    index = 0;
	count = 0;
}

phonebook::~phonebook()
{
}

void phonebook::ADD()
{
    std::string f;
    std::string l;
    std::string n;
    std::string ph_n;
    std::string da_s;

	if (index % 8 == 0)
		index = 0;
	iteration1:
	std::cout << "Enter your first name : ";
    if (!getline(std::cin, f))
		exit(1);
	if (f.empty())
	{
		std::cout << "Empty string!" << std::endl;
		goto iteration1;
	}
	if (!std::cin.good())
		return ;
    contact[index].setFirstName(f);
	iteration2:
	std::cout << "Enter your last name : ";
    if (!getline(std::cin, l))
		exit(1);
	if (l.empty())
	{
		std::cout << "Empty string!" << std::endl;
		goto iteration2;
	}
	if (!std::cin.good())
		return ;
    contact[index].setLastName(l);
	iteration3:
	std::cout << "Enter your nikname : ";
    if (!getline(std::cin, n))
		exit(1);
	if (n.empty())
	{
		std::cout << "Empty string!" << std::endl;
		goto iteration3;
	}
	if (!std::cin.good())
		return ;
    contact[index].setNikName(n);
	iteration4:
	std::cout << "Enter your phone Number : ";
	if (!getline(std::cin, ph_n))
		exit(1);
	if (ph_n.empty())
	{
		std::cout << "Empty string!" << std::endl;
		goto iteration4;
	}
	if (!std::cin.good())
		return ;
	contact[index].setPhoneNumber(ph_n);
	iteration5:
	std::cout << "Enter your Dark secret : ";
	if (!getline(std::cin, da_s))
		exit(1);
	if (da_s.empty())
	{
		std::cout << "Empty string!" << std::endl;
		goto iteration5;
	}
	if (!std::cin.good())
		return ;
	contact[index].setDarkestSecret(da_s);
	std::cout << "Contact added successfully" << std::endl;
	index++;
	if (count < 8)
        count++;
}

void	print()
{
	for (int i = 0; i < 4; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			if (i == 0)
				std::cout << "+";
			else
				std::cout << "~";
		}
		std::cout << " ";
	}
	std::cout << "+" << std::endl;
}

std::string ft_printstr(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 10).replace(9, 1, "."));
	else
		return (str);
}

void phonebook::SEARCH()
{
	std::string idx;

	if (count == 0)
    {
        std::cout << "Empty phonebook!" << std::endl;
        return ;
    }
	print();
	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(11) << "nickname|"<< std::endl;
	print();
	for (int i = 0; i < count; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << ft_printstr(contact[i].getFirstName());
		std::cout << "|" << std::setw(10) << ft_printstr(contact[i].getLastNmae());
		std::cout << "|" << std::setw(11) << ft_printstr(contact[i].getNikNmae())+"|";
		std::cout << std::endl;
	}
	print();
	itr1:
	std::cout << "Enter your index : ";
	if (!getline(std::cin, idx))
		exit(1);
	if (!std::cin.good() || idx.empty())
	{
		std::cout << "Empty index! " << std::endl;
		goto itr1;
	}
	if ((ft_atoi(idx) >= 0) && (ft_atoi(idx) < count))
	{
		std::cout << contact[ft_atoi(idx)].getFirstName() << std::endl;
		std::cout << contact[ft_atoi(idx)].getLastNmae() << std::endl;
		std::cout << contact[ft_atoi(idx)].getNikNmae() << std::endl;
		std::cout << contact[ft_atoi(idx)].getPhoneNumber() << std::endl;
		std::cout << contact[ft_atoi(idx)].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "index out of range! " << std::endl;
}
