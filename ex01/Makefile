CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = PhoneBook.cpp
OBJS = ${SRCS:.c=.o}

NAME = PhoneBook

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
