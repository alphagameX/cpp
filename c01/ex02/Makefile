# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthur <arthur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/22 18:50:59 by arthur            #+#    #+#              #
#    Updated: 2021/07/22 18:52:44 by arthur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROPERTY

FILE=$(wildcard *.cpp)
FLAGS=-Wall -Wextra -Werror -std=c++98
CC=clang++
NAME=brain

# RULES
################################################################################

all:
	$(CC) $(FLAGS) $(FILE) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.DEFAULT_GOAL:= all