#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/09 08:35:31 by aarouss           #+#    #+#              #
#    Updated: 2015/01/07 11:56:39 by scoudert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
FLAGS = -Wextra -Werror -Wall
HEAD = includes/
OBJS = $(FILES:.c=.o);
FILES = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_isalnum.c \
		ft_strcmp.c ft_strncmp.c ft_strequ.c ft_strnequ.c ft_tolower.c \
		ft_toupper.c ft_memcmp.c ft_strdel.c ft_putchar.c ft_putchar_fd.c \
		ft_putnbr.c ft_putnbr_fd.c ft_putendl.c ft_putendl_fd.c ft_putstr.c \
		ft_putstr_fd.c ft_strdel.c ft_strclr.c ft_bzero.c ft_memdel.c \
		ft_strdel.c ft_striter.c ft_striteri.c ft_memset.c ft_memcpy.c \
		ft_memccpy.c ft_memchr.c ft_memmove.c ft_memalloc.c ft_strlen.c \
		ft_strlcat.c ft_strcpy.c ft_strncpy.c ft_strmap.c ft_strmapi.c \
		ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcat.c \
		ft_strncat.c ft_strjoin.c ft_strdup.c ft_strnew.c ft_strsub.c \
		ft_strtrim.c ft_atoi.c ft_itoa.c ft_lstadd.c ft_lstdel.c \
		ft_lstdelone.c ft_lstiter.c ft_lstnew.c ft_lstmap.c ft_strsplit.c \

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -c $(FILES) -I $(HEAD)
	@echo "\033[32mCompile all .c \033[0m"
	@ar rc $(NAME) $(OBJS)
	@echo "\033[32mCompile all .o \033[0m"
	@ranlib $(NAME)
	@echo "\033[36mCreate libft.a \033[0m"

clean:
	@rm -rf $(OBJS)
	@echo "\033[31mDelete all .o \033[0m"

fclean: clean
	@echo "\033[31mDelete libft.a\033[0m"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
