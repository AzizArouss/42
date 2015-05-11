# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:03:52 by aarouss           #+#    #+#              #
#    Updated: 2015/05/11 11:37:55 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a
INCLUDE =
CFLAGS = -Wall -Werror -Wextra
SRC = srcs/ft_isascii.s \
	  srcs/ft_isprint.s \
	  srcs/ft_puts.s \
	  srcs/ft_isalnum.s \
	  srcs/ft_isdigit.s \
	  srcs/ft_memcpy.s \
	  srcs/ft_strcat.s \
	  srcs/ft_tolower.s \
	  srcs/ft_isalpha.s \
	  srcs/ft_isnum.s \
	  srcs/ft_strdup.s \
	  srcs/ft_toupper.s \
	  srcs/ft_bzero.s \
	  srcs/ft_cat.s \
	  srcs/ft_memset.s \
	  srcs/ft_strcpy.s \
	  srcs/ft_strlen.s \

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
