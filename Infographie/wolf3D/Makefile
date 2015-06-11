# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/21 09:54:35 by aarouss           #+#    #+#              #
#    Updated: 2015/06/11 14:30:22 by aarouss          ###   ########.fr        #
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
	@echo "\033[7;34m wolf3d > Compile all .o     \033[0m"
	@make -C libft/
	@make -C minilibx_macos/
	@$(CC) $(OBJ) -o $(NAME) -L libft/ -lft $(FLAGS) -lmlx -framework OpenGL -framework AppKit

%.o: %.c
	@echo "\033[7;33m wolf3d > Compile all .c     \033[0m"
	@$(CC) -I . -o $@ -c $? $(FLAGS)

.PHONY: clean fclean re

clean:
	@echo "\033[7;31m wolf3d > Delete all .o      \033[0m"
	@rm -f $(OBJ)
	@make -C libft/ clean
	@make -C minilibx_macos/ clean

fclean: clean
	@echo "\033[7;32m wolf3d > Delete wolf3d file \033[0m"
	@rm -f $(NAME)
	@make -C libft/ fclean

re: fclean all
