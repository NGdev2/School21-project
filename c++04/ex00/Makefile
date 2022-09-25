# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 18:01:45 by ftegan            #+#    #+#              #
#    Updated: 2022/09/06 00:07:16 by ftegan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJS	=	${SRCS:.cpp=.o}

NAME	=	animals 

HEADER	=	Dog.hpp Animal.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp

CXX = clang++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

.cpp.o:
			${CXX} ${CPPFLAGS} -c $< -o $@

all:		${NAME}

${NAME}:	${OBJS} ${HEADER}
			@${CXX} ${CPPFLAGC} -o ${NAME} ${OBJS}

clean:
			@${RM} ${OBJS}

fclean:		clean
			@${RM} ${NAME}

re:			fclean all