# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 18:01:45 by ftegan            #+#    #+#              #
#    Updated: 2022/08/17 22:46:57 by ftegan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp	HumanA.cpp	HumanB.cpp	Weapon.cpp

OBJS	=	${SRCS:.cpp=.o}

NAME = humans

HEADER	=	HumanA.hpp	HumanB.hpp	Weapon.hpp

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