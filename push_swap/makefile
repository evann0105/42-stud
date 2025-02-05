# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/12 17:36:00 by emgret            #+#    #+#              #
#    Updated: 2025/02/05 14:00:21 by emgret           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	./src/main.c \
		./src/sort_big.c \
		./src/error.c \
		./src/utils.c \
		./src/utils_again.c \
		./src/operations.c \
		./src/to_sort.c \
		./src/sort_for_five.c \
		./src/sort_three.c \
		./src/others_op.c \
		./src/last_operation.c


OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = gcc

LIBFT_PATH = libft/

LIBFT_LIB = $(LIBFT_PATH)libft.a

NAME = push_swap

RED=\x1b[31m'
RESET=\033[o
BLUE = \x1b[36m

MESSAGE_ALL = "all files are compiled"
MESSAGE_C = "all files are clean"
MESSAGE_FC = "all files and name are clean"

.SILENT:

all: title subsystems $(NAME)

title:
	@echo "$(RED)"
	@sleep 0.2 && echo " ████████╗  ██╗   ██╗  ███████╗   ██╗   ██╗           ███████╗   ██╗    ╔██╗  ████████╗  ████████╗"
	@sleep 0.2 && echo " ██╔═══██║  ██║   ██║  ██╔════╝   ██║   ██║           ██╔════╝   ██║    ║██║  ██════██║  ██╔═══██║"
	@sleep 0.2 && echo " ████████║  ██║   ██║  ███████╗   ████████║  █████╗   ███████╗   ██║╔██╗║██║  ████████║  ████████║"
	@sleep 0.2 && echo " ██╔═════╝  ██╚═══██║  	    ██║   ██════██║  ╚════╝   ╔════██║   ██║║██║║██║  ██╔═══██║  ██╔═════╝"
	@sleep 0.2 && echo " ██║        ████████║  ███████║   ██║   ██║           ███████║   ██████████║  ██║   ██║  ██║      "
	@sleep 0.2 && echo " ╚═╝        ╚═══════╝  ╚══════╝   ╚═╝   ╚═╝           ╚══════╝   ╚═════════╝  ╚═╝   ╚═╝  ╚═╝      "
	@sleep 0.2 && echo "                                         Welcome to PUSH_SWAP!                                    "
	@echo "$(RESET)"

subsystems:
	@make -C $(LIBFT_PATH) all
	echo "$(BLUE)"
	echo "$(MESSAGE_ALL)"
	echo "$(RESET)"

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT_LIB) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean: title
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJ)
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
	rm -f $(OBJ)

fclean_no_mss:
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean_no_mss all

.PHONY: all clean fclean re