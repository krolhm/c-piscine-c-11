# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 16:18:43 by rbourgea          #+#    #+#              #
#    Updated: 2019/09/19 14:31:09 by rbourgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = ./srcs/ft_atoi.c ./srcs/ft_putchar.c ./srcs/ft_putnbr.c ./srcs/ft_putstr.c ./srcs/main.c

HEAD = ./includes/

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}:
	gcc ${FLAGS} -I${HEAD} ${SRCS} -o ${NAME}

clean:
	rm -f ${NAME}

fclean:clean
	rm -f ${NAME}

re: fclean all

.PHONY: re fclean clean all .c.o
