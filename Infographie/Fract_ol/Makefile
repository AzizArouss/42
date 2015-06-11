# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/09 10:04:46 by aarouss           #+#    #+#              #
#    Updated: 2015/06/11 14:51:46 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
PATH_SRC = ./src/
PATH_OBJ = ./
PATH_INC = ./libft/includes/

CC = cc
CFLAGS = -Wall -Wextra -Werror -Ofast -I $(PATH_INC)

LIBS = -lm -L libft/ -lft -L minilibx_macos/ -lmlx -framework OpenGL -framework AppKit

HEAD = $(PATH_SRC)ftl.h

SRC =	main.c \
		ft_error.c \
		ftl_hook.c \
		ftl_draw.c \
		ftl_cal.c \
		ftl_fractal.c \
		ftl_fractal_2.c \
		ftl_helper.c \
		ftl_color.c

OBJ = $(addprefix $(PATH_SRC), $(SRC:.c=.o))


all: $(NAME)

$(NAME): $(OBJ) $(HEAD)
	@echo "\033[7;34m fract_ol > Compile all .o      \033[0m"
	@make -C minilibx_macos/
	@make -C libft/
	@$(CC) $(OBJ) -o $(NAME) $(LIBS)

.PHONY: clean fclean

clean:
	@echo "\033[7;31m fract_ol > Delete all .o       \033[0m"
	@make -C libft/ clean
	@/bin/rm -f $(OBJ)

fclean: clean
	@echo "\033[7;32m fract_ol > Delete fractol file \033[0m"
	@make -C libft/ fclean
	@/bin/rm -f $(NAME)

re: fclean all
