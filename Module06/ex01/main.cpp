/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:28:40 by ibenmain          #+#    #+#             */
/*   Updated: 2022/12/30 23:20:40 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main()
{
  t_Data        *data;
  t_Data        *ret;
  uintptr_t   ptr;

  data = new t_Data;
  data->str = "issam";
  data->x = 24;
  ptr = serialize(data);
  ret = deserialize(ptr);
  std::cout << "name : " << ret->str << std::endl;
  std::cout << "age : " << ret->x << std::endl;
}