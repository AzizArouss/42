# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:03:52 by aarouss           #+#    #+#              #
#    Updated: 2015/04/02 15:21:05 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftASM.a
INCLUDE =
CFLAGS = -Wall -Werror -Wextra
SRC = ft_isascii.s \
	  ft_isprint.s \
	  ft_puts.s \
	  ft_isalnum.s \
	  ft_isdigit.s \
	  ft_memcpy.s \
	  ft_strcat.s \
	  ft_tolower.s \
	  ft_isalpha.s \
	  ft_isnum.s \
	  ft_strdup.s \
	  ft_toupper.s \


CC = gcc
LIB = ar rc
RM = rm -rf
OBJS= $(SRC:.s=.o)

all: $(NAME)

$(NAME):$(OBJS)
	$(LIB) $(NAME) $(OBJS)
	@ranlib $(NAME)

%.o: %.s
	~/.brew/bin/nasm -f macho64 $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean
