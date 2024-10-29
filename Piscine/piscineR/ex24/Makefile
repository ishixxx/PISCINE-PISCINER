# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vihane <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 12:33:45 by vihane            #+#    #+#              #
#    Updated: 2024/05/17 15:15:18 by vihane           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

HEADER = ./includes/

OBJS =	${SRCS:.c=.o}

CC = cc
RM = rm -f

CFLAGS = -Wall -Werror -Wextra -I ${HEADER}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
