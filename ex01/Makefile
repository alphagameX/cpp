# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthur <arthur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/16 10:55:01 by arthur            #+#    #+#              #
#    Updated: 2021/07/16 17:46:23 by arthur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# FILE

_PHONEBOOK=$(addprefix class/, \
	phonebook/*.cpp \
	phonebook/contact/*.cpp)
CLASS=$(_PHONEBOOK)
FILE=$(wildcard *.cpp) \
	$(wildcard class/*.cpp) \
	$(CLASS)

# FLAG AND CONFIG

NAME=PhoneBook
CC=clang++
FLAGS=-Wall -Werror -Wextra -std=c++98

# RULES

################################################################################

all:
	$(CC) $(FILE) $(FLAGS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all