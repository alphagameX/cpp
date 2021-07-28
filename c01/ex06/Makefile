# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthur <arthur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/25 20:14:20 by arthur            #+#    #+#              #
#    Updated: 2021/07/28 12:42:44 by arthur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROPERTY
FILE=Karen.cpp
FLAGS=-Wall -Werror -Wextra
CC=clang++

# RULES
################################################################################

lib:
	$(CC) $(FLAGS) $(FILE) -c
	ar rcs libkarenfilter.a *.o
all: lib
	$(CC) $(FLAGS) main.cpp -L. -lkarenfilter -o karenFilter
	
clean:
	rm -rf *.o

fclean: clean
	rm -rf libkarenfilter.a
	rm -rf karenFilter

re: fclean all

.DEFAULT_GOAL:= all