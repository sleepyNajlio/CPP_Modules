# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 03:45:53 by nloutfi           #+#    #+#              #
#    Updated: 2023/06/22 22:26:30 by nloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= convert

SRC		= main.cpp ScalarConverter.cpp 

CC		= c++ -Wall -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
	@$(CC) $(SRC) -o $(NAME)
	@echo "✅"

clean :
	@rm -f $(NAME)
	@echo "❌"
	
fclean : clean

re : fclean all
