NAME = megaphone
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.opp)

all:$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.opp: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
