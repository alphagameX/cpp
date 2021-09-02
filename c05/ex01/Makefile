# AUTO-GENERATE FILE
# BY 42TOOLBOX
# creator: https://github.com/alphagameX
# project author: arthur

CC=clang++
NAME=Forms
FLAGS= -Wall -Wextra -Wall -std=c++98
SRCS=	Bureaucrat.cpp \
		Form.cpp \
		main.cpp
OBJS=$(SRCS:.cpp=.o)

$(NAME):$(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
