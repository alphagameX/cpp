# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthur <arthur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 00:55:38 by arthur            #+#    #+#              #
#    Updated: 2021/07/23 11:41:13 by arthur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROPERTY

FILE=$(wildcard *.cpp)
CC=clang++
FLAGS=-Wall -Wextra -Werror -std=c++98
NAME=megaphone

# RULES

################################################################################

all:
	$(CC) $(FLAGS) $(FILE) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all