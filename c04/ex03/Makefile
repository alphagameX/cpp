FILE=	AMateria.cpp \
		materia/Ice.cpp \
		materia/Cure.cpp \
		materia/MateriaSource.cpp  \
		character/Character.cpp \
		main.cpp

CC=clang++
FLAGS=-Wall -Werror -Wextra -g
NAME=a.out

all:
	$(CC) $(FLAGS) $(FILE) -o $(NAME)

debug:
	$(CC) $(FLAGS) $(FILE) -D DEBUG=1 -o $(NAME)

clean:
	rm -f $(NAME)

valgrind: re
	docker build -t valgrind $(shell pwd)/valgrind
	docker run -it -v $(shell pwd)/:/project valgrind

# ONLY IN VALGRIND CONTAINER
run: re 
	@valgrind --leak-check=full ./$(NAME)


fclean: clean

re: fclean all