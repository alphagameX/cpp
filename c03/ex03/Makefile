# AUTO-GENERATE FILE
# BY 42tool
# creator: https://github.com/atinseau
# project author: atinseau
#######################
CC=clang++
NAME=DiamondTrap
FLAGS= -Wall -Wextra -Wall -std=c++98 -Wshadow -Wno-shadow
SRCS=	ClapTrap.cpp \
		DiamondTrap.cpp \
		FragTrap.cpp \
		ScavTrap.cpp \
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
