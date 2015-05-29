# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 15:03:52 by aarouss           #+#    #+#              #
#    Updated: 2015/05/29 12:03:40 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a
INCLUDE =
CFLAGS = -Wall -Werror -Wextra
SRC = srcs/part_1/ft_bzero.s \
	  srcs/part_1/ft_strcat.s \
	  srcs/part_1/ft_isalpha.s \
	  srcs/part_1/ft_isdigit.s \
	  srcs/part_1/ft_isalnum.s \
	  srcs/part_1/ft_isascii.s \
	  srcs/part_1/ft_isprint.s \
	  srcs/part_1/ft_toupper.s \
	  srcs/part_1/ft_tolower.s \
	  srcs/part_1/ft_puts.s \
	  srcs/part_2/ft_strlen.s \
	  srcs/part_2/ft_memset.s \
	  srcs/part_2/ft_memcpy.s \
	  srcs/part_2/ft_strdup.s \
	  srcs/part_3/ft_cat.s \

CC = gcc
LIB = ar rc
RM = rm -rf
OBJS= $(SRC:.s=.o)

all: $(NAME)

$(NAME):$(OBJS)
	@echo "\033[7;37m asm_lib | Compile all .o    \033[0m"
	@$(LIB) $(NAME) $(OBJS)
	@ranlib $(NAME)

%.o: %.s
	@echo "\033[7;37m asm_lib | Compile all .s    \033[0m"
	@~/.brew/bin/nasm -f macho64 $<

clean:
	@echo "\033[7;37m asm_lib | Delete all .o     \033[0m"
	@$(RM) $(OBJS)

fclean: clean
	@echo "\033[7;37m asm_lib | Delete a.out file \033[0m"
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean
