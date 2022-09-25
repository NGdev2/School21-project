NAME = libft.a

LIST =	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c \
		ft_isascii.c	ft_isprint.c	ft_strlen.c \
		ft_bzero.c		ft_memcpy.c		ft_strlcpy.c \
		ft_memmove.c	ft_toupper.c	ft_tolower.c \
		ft_strchr.c		ft_strrchr.c	ft_strncmp.c \
		ft_atoi.c		ft_memcmp.c		ft_memchr.c \
		ft_strnstr.c	ft_memset.c		ft_calloc.c \
		ft_strdup.c		ft_strlcat.c	ft_substr.c \
		ft_strjoin.c	ft_strtrim.c	ft_putchar_fd.c \
		ft_putstr_fd.c	ft_putendl_fd.c	ft_striteri.c \
		ft_putnbr_fd.c	ft_itoa.c		ft_strmapi.c \
		ft_split.c

LIST_B =	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c \
			ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c \
			ft_lstclear.c	ft_lstiter.c		ft_lstmap.c

LIST_GNL = get_next_line.c	get_next_line_utils.c

OBJ = $(patsubst %.c,%.o,$(LIST))
OBJ_GNL	= $(patsubst %.c,%.o,$(LIST_GNL))
OBJ_B = $(patsubst %.c,%.o,$(LIST_B))

INC_GNL	= get_next_line.h

FLAGS = -Wall -Wextra -Werror

all : $(GNL) $(NAME)

$(NAME) : $(OBJ) $(OBJ_GNL) 
	ar rcs $(NAME) $(OBJ) $(OBJ_GNL) 

$(GNL)	:	$(OBJ_GNL)
		gcc $(FLAGS) -I$(INC_GNL) $(OBJ_GNL)

%.o : %.c
	gcc $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ) $(OBJ_B) $(OBJ_GNL)

fclean : clean
	rm -f $(NAME)

bonus : $(OBJ_B) all
	ar rcs $(NAME) $(OBJ) $(OBJ_B) 
re : fclean all

.PHONY : all clean fclean re bonus