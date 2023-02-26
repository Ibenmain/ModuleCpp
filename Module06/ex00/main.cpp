/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:50:27 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/30 18:48:57 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int    check_err_point(std::string str, int point)
{
  int i;
  str[0] == '-' ? i = 1 : i = 0;
  int len = (int)str.size();
  for (; i < point; i++)
  {
    if (!isdigit(str[i]))
      return (0);
  }
  for (int j = point + 1; j < len; j++)
  {
    if (!isdigit(str[j]) && str[len - 1] != 'f')
        return (0);
  }
  if (str[len - 1] == '.' || (!isdigit(str[len - 2]) && str[len - 1] == 'f'))
    return (0);
  return (1);
}

int ft_compar(std::string str)
{
  if (str == "nan" || str == "nanf" || str == "inf" || str == "inff" || str == "-inf" \
  || str == "-inff" || str == "+inf" || str == "+inff")
    return (1);
  return (0);
}

int check_err(std::string str)
{
  int i;
  int len = (int)str.size();
  str[0] == '-' ? i = 1 : i = 0;
  for (; i < len; i++)
  {
    if (!isdigit(str[i]))
        return (0);
  }
  return (1);
}

int main(int ac, char **av)
{
  // (void)ac;
  std::string str;
  if (av[1])
    str = av[1];
  if (ac != 2)
      return (std::cout << "Error: Invalid argument\n", 1);
  int  point = str.find('.');
  if (point != -1 && !check_err_point(str, point))
      return (std::cout <<"Error: Invalid argument\n", 1);
  else if (point == -1 && !check_err(str) && str.length() != 1 && !ft_compar(str))
      return (std::cout <<"Error: Invalid argument\n", 1);
  Convert p(str);
  std::cout << p;
  return (0);
}