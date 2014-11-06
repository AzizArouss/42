# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/24 12:40:43 by aarouss           #+#    #+#              #
#    Updated: 2014/07/24 18:09:38 by aarouss          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = main.c error_gestion.c input_gestion.c
OBJ = main.c error_gestion.o input_gestion.o
FLAG = -Wall -Werror -Wextra

all : $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	gcc $(FLAG) $(OBJ) -I include -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
