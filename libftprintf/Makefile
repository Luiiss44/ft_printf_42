# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/13 12:25:37 by lmarquin          #+#    #+#              #
#    Updated: 2024/04/13 13:12:30 by lmarquin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
SRC	=	ft_printf_l.c \
		ft_putchar_l.c \
		ft_putstr_l.c \
		ft_putptr_l.c \
		ft_putint_l.c \
		ft_putnbr_l.c \
		ft_puthex_l.c \
OBJS = $(SRC:.c=.0)
CC = gcc
RM = rm -rf
CFLAS = -Wall -Werror -Wextra
AR = ar crs

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

all: $(NAME)
clean:	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re


