SRCS		=	ft_strlen.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strncmp.c ft_atoi.c ft_strcpy.c ft_substr.c

OBJS	=	${SRCS:.c=.o}


NAME	=	libft.a

CC		=	cc

RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $<	-o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

${NAME}:   ${OBJS}
