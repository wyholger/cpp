NAME =			animal

CC =			clang++

FLAGS =			-Wall -Wextra -Werror -std=c++98

RM =			rm -rf

SRC =			src/main.cpp\
				src/Animal.cpp\
				src/Cat.cpp\
				src/Dog.cpp\
				src/WrongAnimal.cpp\
				src/WrongCat.cpp\
				src/Brain.cpp

HDR =			include/Animal.hpp\
				include/Cat.hpp\
				include/Dog.hpp\
				include/WrongAnimal.hpp\
				include/WrongCat.hpp\
				include/Brain.hpp

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