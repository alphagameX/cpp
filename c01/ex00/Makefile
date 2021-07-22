# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthur <arthur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/22 13:57:15 by arthur            #+#    #+#              #
#    Updated: 2021/07/22 14:03:41 by arthur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROPERTY

FILE= newZombie.cpp \
	  randomChump.cpp \
	  Zombie.cpp
OBJ=$(FILE:.cpp=.o)
FLAGS=-Wall -Werror -Wextra -std=c++98
MAIN=main.cpp
CC=clang++
NAME=zombie

#RULES

################################################################################

lib:
	$(CC) $(FLAGS) $(FILE) -c
	ar rcs lib$(NAME).a $(OBJ) 

all: lib
	$(CC) $(FLAGS) $(MAIN) -L. -lzombie -o $(NAME)

clean:
	rm -rf $(OBJ)

.DEFAULT_GOAL := all