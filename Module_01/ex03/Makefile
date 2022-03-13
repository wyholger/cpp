NAME =			zombie

CC =			clang++

FLAGS =			-Wall -Wextra -Werror -std=c++98

RM =			rm -rf

SRC =			main.cpp	HumanA.cpp	HumanB.cpp	Weapon.cpp

HDR =			HumanA.hpp	HumanB.hpp	Weapon.hpp

OBJS =			$(SRC:.cpp=.o)

all:			$(NAME)

$(NAME) :		$(OBJS) Makefile
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(HDR)
				$(CC) $(FLAGS) -c $< -o $@

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all, clean, fclean, re