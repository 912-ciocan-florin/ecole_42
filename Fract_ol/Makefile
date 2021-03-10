# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fciocan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/11 19:55:08 by fciocan           #+#    #+#              #
#    Updated: 2018/06/11 21:09:47 by fciocan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
CFLAGS = -Wall -Werror -Wextra
SRC = main.c newton.c scales.c keys.c julia_mandel.c init_all.c hook.c ft_putstr_fd.c ft_putchar_fd.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	@gcc $(FLAGS) -c $(SRC)
	@gcc -o $(NAME) $(OBJ) -lmlx -framework OpenGl -framework AppKit
clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all
