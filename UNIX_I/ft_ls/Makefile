# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/08 10:43:30 by aarouss           #+#    #+#              #
#    Updated: 2014/12/08 10:58:17 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls
CC = gcc
CFLAGS = -Wall -Werror -Wextra
INCLUDES =
SRC = ft_ls.c \
	  ft_ls_l.c \
	  ft_option.c \
	  ft_add.c \
	  ft_space.c \
	  main.c \

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) -L libft -lft

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fcleanall

.PHONY : all, fclean, clean, re
