# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caroua <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/14 19:17:52 by caroua            #+#    #+#              #
#    Updated: 2017/08/14 19:17:58 by caroua           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	colle-1

SRC	=	ft_convertargv.c \
		ft_free_bloc.c \
		ft_free_column.c \
		ft_free_line.c \
		ft_issudoku.c \
		ft_printsol.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_solcount.c \
		ft_solgrille.c \
		ft_validation.c \
		ft_verif.c \
		main.c

all:	$(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -f ft_convertargv.o ft_free_bloc.o ft_free_column.o ft_free_line.o ft_issudoku.o ft_printsol.o ft_putchar.o ft_putnbr.o ft_putstr.o ft_solcount.o ft_solgrille.o ft_validation.o ft_verif.o main.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all
