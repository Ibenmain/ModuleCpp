NAME = easyfind
INC = easyfind.hpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS =  main.cpp
OBJS = $(SRCS:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp $(INC)
	$(CXX) $(CXXFLAGS) -c $<

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all