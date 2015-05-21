#--------------------------------- Makefile -----------------------------------#

NAME := fractol

# Correct formatting on 42's session
ifeq ($(LOGNAME), $(shell whoami))
	ECHO := echo
else
	ECHO := echo -e
endif

# Display settings
RED_L := \033[1;31m
GREEN_L := \033[1;32m
GREEN := \033[0;32m
BLUE := \033[1;34m
RED := \033[0;31m
GRAY := \033[1;30m
GRAY_L := \033[0;37m
CYAN := \033[0;36m
PURPLE_L := \033[1;35m
CYAN_L := \033[1;36m
NC := \033[0m

# Compiler and linker settings
CC := gcc
CFLAGS := -Wall -Wextra -Werror -O3
LFLAGS := -framework OpenGL -framework AppKit -lmlx -L./libft -lft
IFLAGS := -I./inc/ -I./libft/inc/

# Extra libraries
LIBFT := libft/libft.a

# Project layout
SRC_DIR := ./src/
INC_DIR := ./inc/
OBJ_DIR := ./obj/

# Project files
SRC_FILES :=	main.c \
				formulas.c \
				hooks.c \
				fractalize.c \
				colors.c \
				buddhabrot.c \
				settings.c \
	   			menu.c \
	   			switch_fractal.c \
				mlx_px_put_img.c \
				parallel_formulas.c \
				display.c \
				extra_functions.c

OBJ_FILES := $(SRC_FILES:.c=.o)
INC_FILES := fractol.h fractol_struct.h

# List of files
SRC := $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ := $(addprefix $(OBJ_DIR), $(OBJ_FILES))
INC := $(addprefix $(INC_DIR), $(INC_FILES))

.PHONY: all clean fclean re $(LIBFT) 

#------------------------------------------------------------------------------#

all: $(OBJ_DIR) $(LIBFT) $(NAME) auteur

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

auteur:
	$(shell $(ECHO) `whoami` > $@)

norme: $(SRC)
	norminette $(SRC) $(INC)

$(NAME): $(OBJ)
	@$(ECHO) "\n$(BLUE)Linking binary $(RED)$(NAME)$(BLUE).\n"
	@$(CC) -o $@ $^ $(LFLAGS)
	@$(ECHO) "\t✻ $(GRAY)$(CC) -o $(RED)$(NAME)$(GRAY) object files:$(GREEN) OK! √\n$(NC)"

$(LIBFT):
	@make -C libft/

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INC)
	@$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<
	@$(ECHO) "$(BLUE)  ✧ $(GRAY)Compiling: $(RED)$<$(GRAY) ... $(GREEN)OK! √$(NC)"

clean:
	@$(ECHO) "$(BLUE)  ✝ $(GRAY)Removed $(RED)$(NAME) $(GRAY_L)object files$(GRAY).$(NC)"
	@make -C libft/ clean
	@rm -rf $(OBJ_DIR)

fclean: clean
	@$(ECHO) "$(BLUE)  ✝ $(GRAY)Removed $(RED)$(NAME) $(GRAY_L)binary$(GRAY)."
	@rm -f $(NAME) $(LIBFT)
	@$(ECHO) "$(BLUE)  ✝ $(GRAY)Removed $(RED)$(LIBFT) $(GRAY_L)binary$(GRAY).\n"

re: fclean all
