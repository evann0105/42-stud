# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/06 16:22:15 by emgret            #+#    #+#              #
#    Updated: 2025/03/02 11:46:25 by emgret           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	./src/main.c \
		./src/utils.c \
		./src/error.c \
		./src/parsing.c \
		./src/init_and_clean.c
	
OBJ_DIR = obj/
OBJ = $(patsubst %.c,$(OBJ_DIR)%.o,$(SRC))
CFLAGS = -Wall -Wextra -Werror
CC = gcc

LIBFT_PATH = libft/

LIBFT_LIB = $(LIBFT_PATH)libft.a

NAME = pipex

BLUE=\x1b[94m
RESET=\033[o

MESSAGE_ALL = "all files are compiled"
MESSAGE_C = "all files are clean"
MESSAGE_FC = "all files and name are clean"

.SILENT:

all: title subsystems $(NAME)

title:
	@echo "$(BLUE)"
	@sleep 0.2 && echo " ████████╗  ██╗  ████████╗  ███████╗  ██╗    ╔██"
	@sleep 0.2 && echo " ██╔═══██║  ██║  ██╔═══██║  ██╔════╝   ╚██╗╔██╝"
	@sleep 0.2 && echo " ████████║  ██║  ████████║  ███████╗     ║██║"
	@sleep 0.2 && echo " ██╔═════╝  ██║  ██╔═════╝  ██╔════╝   ╔██╝╚██"
	@sleep 0.2 && echo " ██║        ██║  ██║        ███████╗  ██║    ║██"
	@sleep 0.2 && echo " ╚═╝        ╚═╝  ╚═╝        ╚══════╝  ╚═╝    ╚═╝"
	@sleep 0.2 && echo "           Welcome to PUSH_SWAP!                                    "
	@echo "$(RESET)"

subsystems:
	@make -C $(LIBFT_PATH) all
	echo "$(BLUE)"
	echo "$(MESSAGE_ALL)"
	echo "$(RESET)"

$(OBJ_DIR)%.o : %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT_LIB) -o $(NAME)

clean: title
	make -C $(LIBFT_PATH) clean
	rm -rf $(OBJ_DIR)
	echo "$(BLUE)"
	echo "$(MESSAGE_C)"
	echo "$(RESET)"

fclean: clean_no_mss
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)
	@echo "$(BLUE)"
	@echo "$(MESSAGE_FC)"
	@echo "$(RESET)"

clean_no_mss: title
	make -C $(LIBFT_PATH) clean
	rm -rf $(OBJ_DIR)

fclean_no_mss:
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean_no_mss all

.PHONY: all clean fclean re