NAME = phonebook
INC = contact.hpp phonebook.hpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp contact.cpp phonebook.cpp 
OBJS = $(SRCS:.cpp=.o)
RM = rm -rf

all : $(NAME)
$(NAME):$(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(INC)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean:clean
	@$(RM) $(NAME)

re:fclean all