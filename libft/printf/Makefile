# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/13 17:51:57 by emgret            #+#    #+#              #
#    Updated: 2024/10/21 17:01:07 by emgret           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_puthexa_low.c \
		ft_puthexa_upp.c \
		ft_putnbr.c \
		ft_putadress.c \
		ft_strlen.c \
		ft_putunbr.c

OBJ = $(SRC:.c=.o)
DEPS = ${SRCS:.c=.d}
CC = cc
CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include ${DEPS}

.PHONY: all clean fclean re