NAME =			harl

CC =			clang++

FLAGS =			-Wall -Wextra -Werror -std=c++98

RM =			rm -rf

SRC =			main.cpp	Harl.cpp

HDR =			Harl.hpp

OBJS =			$(SRC:.cpp=.o)

all:			$(NAME)

$(NAME) :		$(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(HDR) Makefile
				$(CC) $(FLAGS) -c $< -o $@

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all, clean, fclean, re