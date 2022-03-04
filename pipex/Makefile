# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 11:17:25 by ftegan            #+#    #+#              #
#    Updated: 2022/01/08 23:07:47 by ftegan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	pipex
INCLUDES	=	inc/pipex.h
SRCS		=	src/pipex.c \
				src/pipex_utils.c \
				libft/ft_putchar_fd.c \
				libft/ft_putstr_fd.c \
				libft/ft_split.c \
				libft/ft_strjoin.c \
				libft/ft_strnstr.c \
				libft/ft_strlen.c

OBJS		= ${SRCS:%.c=%.o}
FLAGS		= -Wall -Wextra -Werror

.PHONY : all clean fclean re hello

all			: ${NAME} hello

${NAME}		: ${INCLUDES} ${OBJS}
			@gcc ${FLAGS} ${OBJS} -o ${NAME}
			@echo $(GREEN) "$(NAME) Created!" $(EOC)

%.o			: %.c ${INCLUDES}
			@gcc ${FLAGS} -c $< -o $@

clean		:
			@rm -rf $(OBJS) $(INCLUDES:%.h=%.h.gch)
			@echo ${RED} "${NAME} Objects Cleaned!" ${EOC}

fclean	: clean
	@rm -rf $(NAME)
	@echo ${YELLOW} "${NAME} Precompile Cleaned!" ${EOC}

re		: fclean all

hello	:
	@echo ${violet} "HELLO" ${EOC}
	@say -v Yuri ВИРТУАЛЬНОЕ ПРОСТРАНСТВО ЗАГРУЖЕНО. К ВАШИМ УСЛУГАМ, СЭР

red= "\033[0;31m"
RED= "\033[1;31m"
green = "\033[0;32m"
GREEN = "\033[4;32m"
yellow = "\033[0;33m"
YELLOW = "\033[1;33m"
blue= "\033[0;34m"
BLUE= "\033[1;34m"
violet = "\033[0;35m"
cyan= "\033[0;36m"
CYAN= "\033[1;36m"
EOC = "\033[0m"
