# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/12 10:32:51 by aarouss           #+#    #+#              #
#    Updated: 2015/01/26 15:06:17 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SOURCES = fdf.c \
		  ft_draw.c \
		  ft_drawline.c \
		  ft_keypress.c \
		  get_next_line.c \

OBJECTS = $(SOURCES:.c=.o)

FLAGS = -Wall -Werror -Wextra -03 -I ./includes -I/usr/x11/include/

MLXFLAGS = -L/usr/X11/lib -lmlx -lX11 -lXext

all: $(NAME)

$(NAME): $(OBJECTS)
	make -C libft
	$(CC) $(FLAGS) $(MLXFLAGS) -o $@ $^ -L libft -lft

%.o: %.c
	$(CC) $(FLAGS) -c $<

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
