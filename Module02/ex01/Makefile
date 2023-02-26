NAME = fixed_point
INC = fixed.hpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS =  main.cpp fixed.cpp
OBJS = $(SRCS:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $^

%.o: %.cpp (INC)
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all