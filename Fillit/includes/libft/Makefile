# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fciocan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 16:01:25 by fciocan           #+#    #+#              #
#    Updated: 2018/01/20 16:03:40 by fciocan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

LIB = ./

SRCFILES =	ft_memset.c\
			ft_memalloc.c\
			ft_memdel.c\
			ft_putchar.c\
			ft_putchar_fd.c\
			ft_putendl.c\
			ft_putendl_fd.c\
			ft_putstr_fd.c\
			ft_strlen.c\
			ft_strnew.c\
			ft_strsub.c\

OBJECT =	$(SRCFILES:.c=.o)			

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) -I $(LIB) $(SRCFILES)
	ar rc $(NAME) $(OBJECT)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
