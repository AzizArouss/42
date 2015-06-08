# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/08 13:16:20 by aarouss           #+#    #+#              #
#    Updated: 2015/06/08 13:16:22 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
PATH_SRC = ./src/
PATH_OBJ = ./
PATH_INC = ./libft/includes/

CC = cc
CFLAGS = -Wall -Wextra -Werror -Ofast -I $(PATH_INC)
# CFLAGS = -Ofast -I $(PATH_INC) -g
LIBS = -L libft/ -lft

HEAD = $(PATH_SRC)push_swap.h

SRC =	main.c \
		ps_parse.c \
		ps_helper.c \
		ps_stack.c \
		ps_algo.c \
		ps_algo_2.c \
		ps_algo_3.c \
		ps_algo_4.c \
		ps_operator_swap.c \
		ps_operator_push.c \
		ps_operator_rotate.c \
		ps_operator_reverse.c \
		ft_error.c \

OBJ = $(addprefix $(PATH_SRC), $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ) $(HEAD)
	@echo "\033[7;37m push_swap ◉ ϖ ◉ | Compile all .o \033[0m"
	@make -C libft/
	@$(CC) $(OBJ) -o $(NAME) $(LIBS)


.PHONY: clean fclean

clean:
	@echo "\033[7;37m push_swap ◉ ϖ ◉ | Delete all .o \033[0m"
	@make -C libft/ clean
	@/bin/rm -f $(OBJ)

fclean: clean
	@echo "\033[7;37m push_swap ◉ ϖ ◉ | Delete all executable file \033[0m"
	@make -C libft/ fclean
	@/bin/rm -f $(NAME)

re: fclean all
