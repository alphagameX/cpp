# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthur <arthur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/23 11:52:26 by arthur            #+#    #+#              #
#    Updated: 2021/07/23 18:54:29 by arthur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROPERTY


FILE=$(wildcard *.cpp)
FLAGS= -Wall -Werror -Wextra -std=c++98 -g
CC=clang++
NAME=replace

# RULES
################################################################################

all:
	$(CC) $(FLAGS) $(FILE) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.DEFAULT_GOAL:= all