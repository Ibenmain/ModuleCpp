NAME = Unnecessary_voil
INC = weapon.hpp humanA.hpp humanB.hpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS =  main.cpp humanA.cpp humanB.cpp weapon.cpp 
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
