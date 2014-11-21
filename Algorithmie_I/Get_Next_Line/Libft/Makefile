# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 18:18:59 by gfernand          #+#    #+#              #
#    Updated: 2013/12/01 09:41:06 by gfernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -g -Wall -Wextra -Werror
AR = ar -rsv

SOURCES = bzero.c memcpy.c memccpy.c memchr.c memcmp.c memcpy.c memmove.c
SOURCES += memset.c strcat.c strchr.c strcpy.c strdup.c strlcat.c strlen.c
SOURCES += strncat.c strncpy.c strrchr.c strstr.c strnstr.c strcmp.c strncmp.c
SOURCES += atoi.c islower.c isupper.c isalpha.c isdigit.c isalnum.c isascii.c
SOURCES += tolower.c isprint.c toupper.c isspace.c memalloc.c memdel.c strnew.c
SOURCES += strmap.c strmapi.c strclr.c strdel.c striter.c striteri.c strnequ.c
SOURCES += strsub.c strjoin.c strtrim.c strsplit.c itoa.c putchar.c putstr.c
SOURCES += putendl.c putnbr.c putchar_fd.c putstr_fd.c putendl_fd.c putnbr_fd.c
SOURCES += strequ.c lstnew.c lstdelone.c lstdel.c lstadd.c lstiter.c lstmap.c
SOURCES += putchar_error.c putstr_error.c

OBJECTS = bzero.o memcpy.o memccpy.o memchr.o memcmp.o memcpy.o memmove.o
OBJECTS += memset.o strcat.o strchr.o strcpy.o strdup.o strlcat.o strlen.o
OBJECTS += strncat.o strncpy.o strrchr.o strstr.o strnstr.o strcmp.o strncmp.o
OBJECTS += atoi.o islower.o isupper.o isalpha.o isdigit.o isalnum.o isascii.o
OBJECTS += tolower.o isprint.o toupper.o isspace.o memalloc.o memdel.o strnew.o
OBJECTS += strmap.o strmapi.o strclr.o strdel.o striter.o striteri.o strnequ.o
OBJECTS += strsub.o strjoin.o strtrim.o strsplit.o itoa.o putchar.o putstr.o
OBJECTS += putendl.o putnbr.o putchar_fd.o putstr_fd.o putendl_fd.o putnbr_fd.o
OBJECTS += strequ.o lstnew.o lstdelone.o lstdel.o lstadd.o lstiter.o lstmap.o
OBJECTS += putchar_error.o putstr_error.o 

.PHONY = all clean fclean re;

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

all: $(NAME)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
