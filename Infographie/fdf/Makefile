# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/28 12:13:05 by aarouss           #+#    #+#              #
#    Updated: 2015/01/30 11:19:27 by aarouss          ###   ########.fr        #
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
	@echo "\033[1;35mTres bien, maintenant, compile la bibliotheque\033[0m"
	@make -C libft
	@$(CC) $(FLAGS) $(MLXFLAGS) -o $@ $^ -L libft -lft

%.o: %.c
	@echo "\033[1;33m~ Compilation des fichiers .c SENPAI ♥ ~\033[0m"
	@$(CC) $(FLAGS) -c $<

clean:
	@echo "\033[1;31mBonjour Jarvis, supprime les fichiers .o\033[0m"
	@rm -f $(OBJECTS)

fclean: clean
	@echo "\033[1;32mMaintenant, supprime l'executable fdf\033[0m"
	@rm -f $(NAME)

re: fclean all

.PHONY: all, fclean, clean, re
