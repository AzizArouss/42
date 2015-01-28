# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/23 07:19:30 by aarouss           #+#    #+#              #
#    Updated: 2015/01/28 12:14:56 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_ls.c				\
	ft_ls_l.c				\
	ft_option.c				\
	ft_add.c				\
	ft_space.c				\
	ft_minifct.c			\
	main.c					\

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	@echo "\033[1;34mCompile all \".c\"\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):
	@make -C libft/ re
	@echo "\033[1;34mCompile all \".o\"\033[0m"
	@$(CC) $(CFLAGS) -o $(NAME) $(SRC) -L libft/ -lft

clean:
	@echo "\033[1;34mDelete all \".o\"\033[0m"
	@rm -f $(OBJ)

fclean: clean
	@echo "\033[1;34mDelete libft.a\033[0m"
	@rm -f $(NAME)

re: fclean all

.PHONY: all, fclean, clean, re
