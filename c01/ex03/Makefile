# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthur <arthur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/22 19:01:55 by arthur            #+#    #+#              #
#    Updated: 2021/07/22 19:11:14 by arthur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROPERTY

FILE= HumanA.cpp HumanB.cpp Weapon.cpp
OBJ= $(FILE:.cpp=.o)
FLAGS= -Wall -Werror -Wextra -std=c++98
MAIN= main.cpp
NAME=violence
CC=clang++

# RULES
################################################################################

lib:
	$(CC) $(FLAGS) $(FILE) -c
	ar rcs lib$(NAME).a $(OBJ)
	
all: lib
	$(CC) $(FLAGS) $(MAIN) -L. -l$(NAME) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf lib$(NAME).a
	rm -rf $(NAME)
	
re: fclean all

.DEFAULT_GOAL:= all