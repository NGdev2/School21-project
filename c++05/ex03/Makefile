# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 18:01:45 by ftegan            #+#    #+#              #
#    Updated: 2022/09/20 20:43:23 by ftegan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp

OBJS	=	${SRCS:.cpp=.o}

NAME	=	buro 

HEADER	=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp Intern.hpp

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