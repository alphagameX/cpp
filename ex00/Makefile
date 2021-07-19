
FILE=$(wildcard *.cpp)
CC=clang++
FLAGS=-Wall -Wextra -Werror
NAME=megaphone

all:
	$(CC) $(FLAGS) $(FILE) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all