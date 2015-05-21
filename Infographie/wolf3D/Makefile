# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/21 09:54:35 by aarouss           #+#    #+#              #
#    Updated: 2015/05/21 09:54:50 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= wolf3d
SRC		= main.c \
		  hook.c \
		  map.c  \
		  draw.c \
		  raycasting.c \
		  keys.c


OBJ		= $(SRC:.c=.o)
CC		= gcc
FLAGS	= -Wall -Wextra -Werror -I minilibx_macos

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/
	@make -C minilibx_macos/
	@$(CC) $(OBJ) -o $(NAME) -L libft/ -lft $(FLAGS) -lmlx -framework OpenGL -framework AppKit

%.o: %.c
	@$(CC) -I . -o $@ -c $? $(FLAGS)

.PHONY: clean fclean re

clean:
	@rm -f $(OBJ)
	@make -C libft/ clean
	@make -C minilibx_macos/ clean

fclean: clean
	@rm -f $(NAME)
	@make -C libft/ fclean

re: fclean all
