# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 21:51:16 by emgret            #+#    #+#              #
#    Updated: 2024/12/11 23:17:57 by emgret           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	./src/so_long.c \
		./src/map.c \
		./src/init.c \
		./src/keyhook.c \
		./src/load_images.c \
		./src/loading.c \
		./src/move.c \
		./src/put_img.c \
		./src/borders.c \
		./src/utils.c \
		./src/check_path.c

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra

MLX_PATH = mlx/

MLX_LIB = $(MLX_PATH)libmlx.a

MLX_FLAGS = -Lmlx -lmlx -framework OpenGL -framework AppKit

LIBFT_PATH = libft/

LIBFT_LIB = $(LIBFT_PATH)libft.a

NAME = so_long

GREEN=\033[0;32m
RESET=\033[0m

BLUE = \x1b[36m

MESSAGE_ALL = "all files are compiled"
MESSAGE_C = "all files are clean"
MESSAGE_FC = "all files and name are clean"

CLEAN_MESSAGE = 1

.SILENT:

all: title subsystems $(NAME)

title:
	@echo "$(GREEN)"
	@sleep 0.2 && echo "     ███████╗   ██████╗       ██╗      ██████╗  ███╗   ██╗ ██████╗ "
	@sleep 0.2 && echo "     ██╔════╝  ██╔═══██╗      ██║     ██╔═══██╗ ████╗  ██║██╔════╝ "
	@sleep 0.2 && echo "     ███████╗  ██║   ██║█████╗██║     ██║   ██║ ██╔██╗ ██║██║  ███╗"
	@sleep 0.2 && echo "     	  ██║  ██║   ██║╚════╝██║     ██║   ██║ ██║╚██╗██║██║   ██║"
	@sleep 0.2 && echo "     ███████║  ╚██████╔╝      ███████╗╚██████╔╝ ██║ ╚████║╚██████╔╝"
	@sleep 0.2 && echo "     ╚══════╝   ╚═════╝       ╚══════╝ ╚═════╝  ╚═╝  ╚═══╝ ╚═════╝ "
	@sleep 0.2 && echo "                          Welcome to SO_LONG!                  "
	@echo "$(RESET)"

subsystems:
	@make -C $(MLX_PATH) all
	@make -C $(LIBFT_PATH) all
	echo "$(BLUE)"
	echo "$(MESSAGE_ALL)"
	echo "$(RESET)"

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(MLX_FLAGS) $(OBJ) $(MLX_LIB) $(LIBFT_LIB) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -Imlx -c -o $@ $<

clean: title
	make -C $(MLX_PATH) clean
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJ)
	echo "$(BLUE)"
	echo "$(MESSAGE_C)"
	echo "$(RESET)"

fclean: clean_no_mss
	make -C $(MLX_PATH) fclean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)
	@echo "$(BLUE)"
	@echo "$(MESSAGE_FC)"
	@echo "$(RESET)"

clean_no_mss: title
	make -C $(MLX_PATH) clean
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJ)

fclean_no_mss:
	make -C $(MLX_PATH) fclean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean_no_mss all

.PHONY: all clean fclean re