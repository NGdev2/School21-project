# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/03 20:53:18 by ftegan            #+#    #+#              #
#    Updated: 2022/08/17 16:15:15 by ftegan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:
			all clean fclean re

NAME		=		megaphone

CC			=		clang++

CFLAGS		=		\
					-Wall -Wextra -Werror -c	\
					-std=c++98 -pedantic

RM			=		rm -rf	

SRCS		=		megaphone.cpp

OBJS		= 		$(SRCS:.cpp=.o)

%.o			: 		%.cpp
					$(CC) $(CFLAGS) $< -o $@

$(NAME)		: 		$(OBJS)
					$(CC) $(OBJS) -o $(NAME)

all 		: 		$(NAME)

clean		:
					$(RM) $(OBJS)

fclean		:		clean
					$(RM) $(NAME)

re			:		fclean $(NAME)