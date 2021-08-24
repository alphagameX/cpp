# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthurtinseau <arthurtinseau@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/28 14:41:32 by arthur            #+#    #+#              #
#    Updated: 2021/08/04 10:25:57 by arthurtinse      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE=$(wildcard *.cpp)
FLAGS=-Wall -Werror -Wextra
CC=clang++
NAME=fixed

all:
	$(CC) $(FLAGS) $(FILE) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all