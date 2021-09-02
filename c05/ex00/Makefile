FILE=	$(wildcard *.cpp)
CC=clang++
FLAGS=-Wall -Werror -Wextra -std=c++98 -g
NAME=Bureaucrat

all:
	$(CC) $(FLAGS) $(FILE) -o $(NAME)

clean:
	rm -f $(NAME)

valgrind: fclean
	docker build -t valgrind $(shell pwd)/valgrind
	docker run -it -v $(shell pwd)/:/project valgrind

# ONLY IN VALGRIND CONTAINER
run: re 
	@valgrind --leak-check=full ./$(NAME)

fclean: clean

re: fclean all