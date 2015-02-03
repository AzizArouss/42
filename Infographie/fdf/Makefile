# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/28 12:13:05 by aarouss           #+#    #+#              #
#    Updated: 2015/02/03 11:58:31 by aarouss          ###   ########.fr        #
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
	@echo "\033[7;34mよん | Tres bien, maintenant, compile la bibliotheque                                                                                                                                                                                                                                                                                                                     \033[0m"
	@make -C libft re
	@$(CC) $(FLAGS) $(MLXFLAGS) -o $@ $^ -L libft -lft

%.o: %.c
	@echo "\033[7;33mさん | Compilation des fichiers .c comme vous le souhaitez ♥                                                                                                                                                                                                                                                                                                              \033[0m"
	@$(CC) $(FLAGS) -c $<

clean:
	@echo "\033[7;31mいち | Bonjour Jarvis, avant que tu commence la compilation, je voudrais que tu fasse un peu le menage, commence par supprimer les .o !                                                                                                                                                                                                                                   \033[0m"
	@rm -f $(OBJECTS)

clean_libft:
	@rm -rf 
fclean: clean
	@echo "\033[7;32mに   | Desormais, tu peux commencer a supprimer l'executable fdf ;)                                                                                                                                                                                                                                                                                                       \033[0m"
	@rm -f $(NAME)

re: fclean all

.PHONY: all, fclean, clean, re
