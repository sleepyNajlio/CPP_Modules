# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 03:45:53 by nloutfi           #+#    #+#              #
#    Updated: 2023/06/18 23:06:38 by nloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Bureaucrat

SRC		= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp\
		 RobotomyRequestForm.cpp PresidentialPardonForm.cpp

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