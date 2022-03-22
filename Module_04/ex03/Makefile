NAME =			materia

CC =			clang++

FLAGS =			-Wall -Wextra -Werror -std=c++98

RM =			rm -rf

SRC =			src/AMateria.cpp\
                src/Character.cpp\
                src/Cure.cpp\
                src/Ice.cpp\
                src/main.cpp\
                src/MateriaSource.cpp

HDR =			include/AMateria.hpp\
                include/Character.hpp\
                include/Cure.hpp\
                include/Ice.hpp\
                include/ICharacter.hpp\
                include/IMateriaSource.hpp\
                include/MateriaSource.hpp


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