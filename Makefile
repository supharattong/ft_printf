# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 12:45:56 by sthongso          #+#    #+#              #
#    Updated: 2023/04/26 13:59:34 by sthongso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Libftprintf.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
RM = rm -f

SRC = ft_printf.c\
	ft_pointer.c\
	ft_putnbr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -r $@ $?

%.o: %c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
