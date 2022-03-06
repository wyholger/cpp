NAME			= go
SRCS			= test.cpp Account.cpp
OBJS			= $(SRCS:.cpp=.o)

COMPILER		= clang++
RM				= rm -f
FLAGS			= -Wall -Wextra -Werror -std=c++98 -I. 


all:			$(NAME)

$(NAME):		$(OBJS)
				$(COMPILER) $(FLAGS) -o  $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
