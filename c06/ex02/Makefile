# AUTO-GENERATE FILE
# BY 42tool
# creator: https://github.com/atinseau
# project author: atinseau
#######################
CC=clang++
NAME=Convert
FLAGS= -Wall -Wextra -Wall -std=c++98
SRCS=	Base.cpp \
		main.cpp
#######################
OBJS=${SRCS:.cpp=.o}
#######################
.cpp.o:
	$(CC) $(FLAGS) -c $< -o ${<:.cpp=.o}
#######################
$(NAME): $(OBJS)
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
