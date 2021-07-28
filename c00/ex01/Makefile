# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthur <arthur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/16 10:55:01 by arthur            #+#    #+#              #
#    Updated: 2021/07/20 00:55:19 by arthur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# FILE

_PHONEBOOK=$(addprefix class/, \
	phonebook/*.cpp \
	phonebook/contact/*.cpp)
CLASS=$(_PHONEBOOK)

FILE=$(wildcard class/*.cpp) \
	 $(CLASS)

MAIN=main.cpp

# FLAG AND CONFIG

NAME=PhoneBook
LIB=libpb
CC=clang++
FLAGS=-Wall -Werror -Wextra -std=c++98 

# RULES

################################################################################

lib:
	$(CC) $(FLAGS) $(FILE) -c 
	ar rcs $(LIB).a *.o

all: lib
	$(CC) $(MAIN) $(FLAGS) -L. -lpb -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(LIB).a
	rm -rf $(NAME)

re: fclean all

.DEFAULT_GOAL := all
