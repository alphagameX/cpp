# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthur <arthur@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/22 13:14:53 by arthur            #+#    #+#              #
#    Updated: 2021/07/22 13:58:20 by arthur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROPERTY

FILE=$(wildcard *.cpp)
NAME=account
FLAGS=-Wall -Werror -Wextra -std=c++98 
CC=clang++

# RULES

###############################################################################

all:
	$(CC) $(FLAGS) $(FILE) -o $(NAME)

debug:
	@$(CC) $(FLAGS) -D DEBUG=1 $(FILE) -o $(NAME)
	@./$(NAME) > output
	@diff output 19920104_091532.log
	@if [ "$$?" = "0" ]; then \
		echo "Not diff between log and output"; \
	fi; 

clean:
	rm -rf output

fclean: clean
	rm -rf $(NAME)