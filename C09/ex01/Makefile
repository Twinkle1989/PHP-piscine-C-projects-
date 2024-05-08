# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsolanki <tsolanki@student.hive.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 15:15:36 by tsolanki          #+#    #+#              #
#    Updated: 2024/03/06 18:11:01 by tsolanki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC         = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS        = ${SRC:.c=.o}

HEAD        = ./includes/

NAME        = libft.a

AR          = ar rcs

RM          = rm -f

LIB         = ranlib

GCC         = gcc

CFLAGS      = -Wall -Wextra -Werror

all:        ${NAME}

.c.o:		${GCC} ${CFLAGS} -c -I ${HEAD} $< -o $@

${NAME}:	${OBJS}	
		${AR}	${NAME}	${OBJS}	
		${LIB}	${NAME}

clean:      
			${RM} ${OBJS}

fclean:		clean
			${RM}	${NAME}

re:			fclean all

.PHONY:     all	clean	fclean	re
