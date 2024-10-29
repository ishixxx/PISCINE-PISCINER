NAME = ft_display_file

SRCS = srcs/*.c

OBJS = ${SRCS:.c=.o}

CC = cc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

all:	${NAME}
	
${NAME}: ${OBJS} 
	${CC} ${OBJS} -o ${NAME}
	
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
