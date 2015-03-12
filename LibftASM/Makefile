# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/12 15:57:44 by aarouss           #+#    #+#              #
#    Updated: 2015/03/12 16:00:32 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ME = libftASM.a
INCLUDE =
CFLAGS = -Wall -Werror -Wextra
SRC =		ft_isalnum.s \
			ft_isalpha.s \
			ft_isprint.s \
			ft_isascii.s \
			ft_tolower.s \
			ft_toupper.s \
			ft_isdigit.s

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
