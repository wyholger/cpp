NAME =			zombie

CC =			clang++

FLAGS =			-Wall -Wextra -Werror -std=c++98

RM =			rm -rf

SRC =			Zombie.cpp		newZombie.cpp		randomChump.cpp		main.cpp

HDR =			Zombie.hpp

OBJS =			$(SRC:.cpp=.o)

all:			$(NAME)

$(NAME) :		$(OBJS) Makefile
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(HDR)
				$(CC) $(FLAGS) -c $< -o $@

norme:
				norminette $(DIR_SRCS)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all, clean, fclean, re, bonus