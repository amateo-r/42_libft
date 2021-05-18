SRCS		=	test.c ft_strlen.c

OBJS	=	${SRCS:.c=.o}


NAME	=	libft

CC		=	cc

RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $<	-o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all