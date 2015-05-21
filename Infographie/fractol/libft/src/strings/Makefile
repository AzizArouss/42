#--------------------------------- Makefile -----------------------------------#

NAME = ../../libft.a
SUB_DIR = strings/

# Correct formatting on 42's session
ifeq ($(LOGNAME), $(shell whoami))
	ECHO = echo
else
	ECHO = echo -e
endif

# Display settings
RED_L = \033[1;31m
GREEN_L = \033[1;32m
GREEN = \033[0;32m
BLUE = \033[1;34m
RED = \033[0;31m
GRAY = \033[1;30m
CYAN = \033[0;36m
CYAN_L = \033[1;36m
NC = \033[0m

# Compiler and linker settings
CC = gcc
CFLAGS = -Wall -Wextra -Werror -O3 -g3
IFLAGS = -I../../inc/

# Project layout
INC_DIR = ../../inc/
OBJ_DIR = ../../obj/
OBJ_SUB_DIR = $(addprefix $(OBJ_DIR), $(SUB_DIR))

SRC_FILES = ft_atoi.c ft_itoa.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c \
			ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c \
			ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c \
			ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c \
			ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c \
			ft_strtolower.c ft_strtrim.c ft_tolower.c ft_toupper.c	
OBJ_FILES = $(SRC_FILES:.c=.o)

# List of files
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_SUB_DIR), $(OBJ_FILES))

.PHONY: all clean fclean re

#------------------------------------------------------------------------------#

all: $(NAME)

$(NAME): $(OBJ_SUB_DIR) $(OBJ)

$(OBJ_SUB_DIR):
	@mkdir -p $(OBJ_SUB_DIR)
	@$(ECHO) "$(BLUE)Generating object files for $(RED)$(SUB_DIR)$(BLUE) functions.$(NC)" | tr -d '/'

$(OBJ_SUB_DIR)%.o: %.c $(INC_DIR)libft.h $(INC_DIR)strings.h
	@$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<
	@$(ECHO) "$(BLUE)  ✧ $(GRAY)Compiling: $(RED)$<$(GRAY) ... $(GREEN)OK! √$(NC)"

clean:
	rm -rf $(OBJ_SUB_DIR)

fclean: clean

re: fclean all
