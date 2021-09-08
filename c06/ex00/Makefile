# AUTO-GENERATE FILE
# BY 42tool
# creator: https://github.com/alphagameX
# project author: atinseau
#######################
CC=clang++
NAME=Convert
FLAGS= -Wall -Wextra -Wall
SRCS=	Convert.cpp \
		Test.cpp \
		main.cpp
#######################
OBJS=$(SRCS:.cpp=.o)
#######################
$(NAME):$(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
#######################
all: $(NAME)
#######################
clean:
	@rm -f $(OBJS)
#######################
fclean: clean
	@rm -f $(NAME)
#######################
re: fclean all
#######################
.PHONY: all clean fclean re
