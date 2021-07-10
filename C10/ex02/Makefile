SOURCES	= ft_ctoi.c ft_filelen.c ft_putstrn.c ft_tail.c ft_filecpy.c ft_putchar.c ft_strlen.c

OBJECTS	= ${SOURCES:.c=.o}

NAME	= ft_tail

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${OBJECTS}
			${CC} ${CFLAGS} ${OBJECTS} -o ${NAME}

clean:
			${RM} ${OBJECTS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
