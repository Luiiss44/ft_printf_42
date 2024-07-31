# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarquin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 11:48:43 by lmarquin          #+#    #+#              #
#    Updated: 2024/07/31 11:48:48 by lmarquin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
      ft_putchar_l.c \
      ft_putstr_l.c \
      ft_putptr_l.c \
      ft_putint_l.c \
      ft_putnbr_l.c \
      ft_putuint_l.c \
      ft_puthex_l.c \
      ft_typeformat.c

OBJS = $(SRC:.c=.o)

CC = gcc
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra
AR = ar crs

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re