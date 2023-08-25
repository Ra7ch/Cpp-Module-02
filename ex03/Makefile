SRCS	= main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJS	= ${SRCS:.cpp=.o}
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
NAME	= bsp
CXX		= c++

all	: ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CXXFLAGS} ${SRCS} -o ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

a : all clean
