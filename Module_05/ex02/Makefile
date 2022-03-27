NAME =			bureaucrat

CC =			clang++

FLAGS =			-Wall -Wextra -Werror -std=c++98

RM =			rm -rf

SRC =			src/main.cpp\
				src/Bureaucrat.cpp\
				src/AForm.cpp\
				src/RobotomyRequestForm.cpp\
                src/ShrubberyCreationForm.cpp\
                src/PresidentialPardonForm.cpp

HDR =			include/Bureaucrat.hpp\
				include/AForm.hpp\
				include/RobotomyRequestForm.hpp\
                include/ShrubberyCreationForm.hpp\
                include/PresidentialPardonForm.hpp

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