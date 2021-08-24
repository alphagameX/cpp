FILE=$(wildcard *.cpp)
CC=clang++
FLAGS=-Wall -Werror -Wextra
NAME=flagtrap

all:
	$(CC) $(FLAGS) $(FILE) -I FlagTrap.hpp -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all