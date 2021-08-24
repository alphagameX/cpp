FILE=	ClapTrap.cpp \
		FlagTrap.cpp \
		main.cpp
CC=clang++
FLAGS=-Wall -Werror -Wextra -std=c++98
NAME=flagtrap

all:
	$(CC) $(FLAGS) $(FILE) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all