SRCS	= main.cpp Fixed.cpp
OBJS	= ${SRCS:.cpp=.o}
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
NAME	= Fixed
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
