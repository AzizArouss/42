# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/28 12:13:05 by aarouss           #+#    #+#              #
#    Updated: 2015/02/05 12:50:24 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SOURCES = fdf.c \
			ft_draw.c \
			get_next_line.c \
			ft_drawline.c \
			ft_keypress.c 

OBJECTS = $(SOURCES:.c=.o)

FLAGS = -Wall -Werror -Wextra -O3 -I ./includes -I /usr/X11/include

MLXFLAGS = -L/usr/X11/lib -lmlx -lX11 -lXext

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "\033[7;34m FdF > Compile all .o  \033[0m"
	@make -C libft re
	@$(CC) $(FLAGS) $(MLXFLAGS) -o $@ $^ -L libft -lft

%.o: %.c
	@echo "\033[7;33m FdF > Compile all .c  \033[0m"
	@$(CC) $(FLAGS) -c $<

clean:
	@echo "\033[7;31m FdF > Delete all .o   \033[0m"
	@rm -f $(OBJECTS)

fclean: clean
	@echo "\033[7;32m FdF > Delete fdf file \033[0m"
	@rm -f $(NAME)

re: fclean all

.PHONY: all, fclean, clean, re
