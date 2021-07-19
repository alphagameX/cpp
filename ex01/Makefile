# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthur <arthur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/16 10:55:01 by arthur            #+#    #+#              #
#    Updated: 2021/07/20 00:23:32 by arthur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# FILE

_PHONEBOOK=$(addprefix class/, \
	phonebook/*.cpp \
	phonebook/contact/*.cpp)
CLASS=$(_PHONEBOOK)

FILE=$(wildcard class/*.cpp) \
	 $(CLASS)
OBJ=$(FILE:.cpp=.o)

MAIN=main.cpp

# FLAG AND CONFIG

NAME=PhoneBook
CC=clang++
FLAGS=-Wall -Werror -Wextra -std=c++98 

# RULES

################################################################################

all:
	$(CC) $(MAIN) $(FILE) $(FLAGS)
# echo $(FILE)
# ar 

clean:
	echo $(OBJ)

re: clean all