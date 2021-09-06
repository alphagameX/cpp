# AUTO-GENERATE FILE
# BY 42tool
# creator: https://github.com/alphagameX
# project author: atinseau

CC=clang++
NAME=Form
FLAGS= -Wall -Wextra -Wall -std=c++98
SRCS=	Bureaucrat.cpp \
		forms/Form.cpp \
		forms/ShrubberyCreationForm.cpp \
		forms/RobotomyRequestForm.cpp \
		forms/PresidentialPardonForm.cpp \
		Intern.cpp \
		main.cpp
OBJS=$(SRCS:.cpp=.o)

$(NAME):$(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

valgrind: fclean
	docker build -t valgrind $(shell pwd)
	docker run -it -v $(shell pwd)/:/project valgrind

# ONLY IN VALGRIND CONTAINER
run: re 
	@valgrind --leak-check=full ./$(NAME)
