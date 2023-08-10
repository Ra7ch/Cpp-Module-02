SRCS	= main.cpp Fixed.cpp
OBJS	= ${SRCS:.cpp=.o}
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
NAME	= Fixed

all	: ${NAME}

${NAME} : ${OBJS}
	c++ ${CFLAGS} ${SRCS} -o ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

a : all clean
