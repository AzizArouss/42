# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/26 07:42:37 by aarouss           #+#    #+#              #
#    Updated: 2015/05/26 07:42:45 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
PATH_SRC = ./src/
PATH_OBJ = ./
PATH_INC = ./libft/includes/

CC = cc
CFLAGS = -Wall -Wextra -Werror -Ofast -I $(PATH_INC)
# CFLAGS = -Ofast -I $(PATH_INC) -g

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
		# parse_arg.c \
		# ftl_cal_matrice.c \
		# ftl_matrice.c \

OBJ = $(addprefix $(PATH_SRC), $(SRC:.c=.o))


all: $(NAME)

$(NAME): $(OBJ) $(HEAD)
	make -C minilibx_macos/
	make -C libft/
	$(CC) $(OBJ) -o $(NAME) $(LIBS)

.PHONY: clean fclean

clean:
	make -C libft/ clean
	/bin/rm -f $(OBJ)

fclean: clean
	make -C libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all