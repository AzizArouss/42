#--------------------------------- Makefile -----------------------------------#

# Executable name
NAME = libft.a

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
GRAY_L = \033[0;37m
CYAN = \033[0;36m
CYAN_L = \033[1;36m
NC = \033[0m

# Compiler and linker settings
CC = gcc
AR = ar
CFLAGS = -Wall -Wextra -Werror -O3 -g3
ARFLAGS = -rsc
IFLAGS = -I./includes/

# Project layout
SRC_DIR = ./src/
INC_DIR = ./inc/
OBJ_DIR = ./obj/

.PHONY: all clean fclean re compile

OBJ := $(shell mkdir -p $(OBJ_DIR) && grep -r .o ./obj | awk '{print $$3}')

#------------------------------------------------------------------------------#

all: compile 

auteur:
	$(shell echo -e `whoami` > $@)

$(NAME): $(OBJ) $(INC_DIR)libft.h
	@$(ECHO) "\n$(BLUE)Linking binary $(RED)$(NAME)$(BLUE).\n"
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	@$(ECHO) "\t✻ $(GRAY)$(AR) $(ARFLAGS) $(RED)$(NAME) $(GRAY)object files:$(GREEN) OK! √\n$(NC)"

compile:
	@mkdir -p $(OBJ_DIR)
	@$(MAKE) -C src/io
	@$(MAKE) -C src/lists
	@$(MAKE) -C src/memory
	@$(MAKE) -C src/strings
	@$(MAKE) -C src/tests
	@$(MAKE) $(NAME) 

clean:
	@rm -rf $(OBJ_DIR)
	@$(ECHO) "$(BLUE)  ✝ $(GRAY)Removed $(RED)$(NAME) $(GRAY_L)object files$(GRAY).$(NC)"

fclean: clean
	@rm -f $(NAME)
	@$(ECHO) "$(BLUE)  ✝ $(GRAY)Removed $(RED)$(NAME) $(GRAY_L)binary$(GRAY).$(NC)"

re: fclean all
