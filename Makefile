# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/05 18:15:27 by yookyeoc          #+#    #+#              #
#    Updated: 2025/06/18 17:08:46 by yookyeoc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Text colors
BLACK = \033[0;30m
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
WHITE = \033[0;37m

# Bold text colors
BOLD_BLACK = \033[1;30m
BOLD_RED = \033[1;31m
BOLD_GREEN = \033[1;32m
BOLD_YELLOW = \033[1;33m
BOLD_BLUE = \033[1;34m
BOLD_MAGENTA = \033[1;35m
BOLD_CYAN = \033[1;36m
BOLD_WHITE = \033[1;37m

# Reset color
RESET = \033[0m

# Principals variable needed
NAME=libft.a
CC=cc
CFLAGS = -Wall -Wextra -Werror

OBJ_DIR = ./obj/

OBJS = $(patsubst $.c, $(OBJ_DIR)%.o, $(SRCS))

SRC= ft_atoi.c     ft_isalpha.c  ft_memchr.c   ft_memset.c      ft_strjoin.c  ft_strncmp.c  ft_substr.c	\
	 ft_bzero.c    ft_isascii.c  ft_memcmp.c   ft_putchar_fd.c  ft_strlcat.c  ft_strnstr.c  ft_tolower.c \
	 ft_calloc.c   ft_isdigit.c  ft_memcpy.c   ft_strchr.c      ft_strlcpy.c  ft_strrchr.c  ft_toupper.c \
	 ft_isalnum.c  ft_isprint.c  ft_memmove.c  ft_strdup.c      ft_strlen.c   ft_strtrim.c ft_strmapi.c \
	 ft_striteri.c  ft_putstr_fd.c  ft_putendl_fd.c  ft_putnbr_fd.c  ft_split.c  ft_itoa.c \
	 ft_memchr.c	ft_split.c   \
	 
OBJ = $(SRC:%.c=$(OBJ_DIR)%.o)

$(OBJ_DIR)%.o: %.c
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@


all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BOLD_MAGENTA)Building $(NAME)👷$(RESET)"
	@ar -rcs $(NAME) $(OBJ)
	@echo "$(GREEN)Build Complete!✨$(RESET)" 

%.o: %.c
	@$(CC) -Wall -Werror -Wextra -c $<

clean :
	@echo "$(BOLD_RED)🔥🔥🔥Cleaning up🔥🔥🔥$(RESET)"
	@rm -rf $(OBJ_DIR)
	@echo "$(GREEN)nothing left🔥💔💔💔🔥$(RESET)"

fclean : clean
	@echo "$(BOLD_RED)🔥🔥🔥Cleaning Executables🔥🔥🔥$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)nothing left🔥💔💔💔🔥$(RESET)"
	
re: fclean all

.PHONY: all clean fclean re bonus