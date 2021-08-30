FILE=	DiamondTrap.cpp \
		FragTrap.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		main.cpp
CC=g++
FLAGS=-Wall -Werror -Wextra -std=c++98 -Wshadow -Wno-shadow
NAME=FragTrap

all:
	$(CC) $(FLAGS) $(FILE) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all