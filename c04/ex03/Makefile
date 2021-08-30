FILE=$(wildcard *.cpp)
CC=clang++
# FLAGS=-Wall -Werror -Wextra
NAME=Animal

all:
	$(CC) $(FLAGS) $(FILE) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all