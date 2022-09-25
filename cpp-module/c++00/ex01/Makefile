# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/03 20:53:18 by ftegan            #+#    #+#              #
#    Updated: 2022/08/17 15:50:09 by ftegan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=phonebook

CC		=	c++

CFLAGS	=	-std=c++98 -c -Wall -Wextra -Werror

SOURCES	=	main.cpp	Contact.cpp		PhoneBook.cpp	command_executer.cpp

OBJECTS	=	$(SOURCES:.cpp=.o)

all: $(SOURCES) $(NAME)

$(NAME): $(OBJECTS)
		$(CC) $(OBJECTS) -o $@

.cpp.o:
		$(CC) $(CFLAGS) $< -o $@

clean:
		rm -rf $(OBJECTS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re