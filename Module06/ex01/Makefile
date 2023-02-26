# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibenmain <ibenmain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 18:28:54 by ibenmain          #+#    #+#              #
#    Updated: 2022/12/30 18:28:57 by ibenmain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Convert
INC = Convert.hpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS =  main.cpp Convert.cpp
OBJS = $(SRCS:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp $(INC)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all