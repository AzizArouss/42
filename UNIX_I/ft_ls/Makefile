# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/23 07:19:30 by aarouss           #+#    #+#              #
#    Updated: 2014/12/31 10:40:06 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_ls.c 				\
	ft_ls_l.c  				\
	ft_option.c				\
	ft_add.c 				\
	ft_space.c 				\
	main.c					\
	ft_minifct.c	 

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):
	make -C libft
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) -L libft -lft

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all, fclean, clean, re 

