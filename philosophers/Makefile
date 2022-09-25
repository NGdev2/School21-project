NAME			= philosophers
NAME_BONUS		= philosophers_bonus

SRC		= 		src/init.c			\
				src/main.c			\
				src/parser.c		\
				src/philo_work.c	\
				src/utils.c			\

SRC_BONUS	=								\
				bonus/init_bonus.c			\
				bonus/main_bonus.c			\
				bonus/parser_bonus.c		\
				bonus/philo_work_bonus.c	\
				bonus/utils_bonus.c			\

INC				= inc/philosophers.h
INC_BONUS		= bonus/philosophers_bonus.h

CC				= gcc

CFLAGS			= -g -Wall -Wextra -Werror

OBJ				= $(patsubst %.c, %.o, $(SRC))
OBJ_BONUS		= $(patsubst %.c, %.o, $(SRC_BONUS))

LIBFT			= Libft/libft.a

RM				= rm -rf

.PHONY		:	all clean fclean re bonus

all				: $(LIBFT) $(NAME)

$(NAME)			: $(INC) ${SRC} $(OBJ)
				$(CC) $(CFLAGS) $(OBJ) -I$(INC) $(LIBFT) -o $(NAME)

$(NAME_BONUS)	: $(INC_BONUS) ${SRC_BONUS} $(OBJ_BONUS)
				$(CC) $(CFLAGS) $(OBJ_BONUS) -I$(INC_BONUS) $(LIBFT) -o $(NAME_BONUS)

$(LIBFT)		:
				make -C Libft

%.o			: %.c
			@gcc ${FLAGS} -c $< -o $@

bonus		: clean $(LIBFT) $(NAME_BONUS)

re				: fclean all

clean			:
			$(RM) $(OBJ) $(OBJ)
			$(RM) $(OBJ) $(OBJ_BONUS)

fclean		: clean
			make fclean -C Libft
			$(RM) $(NAME) $(NAME_BONUS)
			@echo ${RED} "${NAME} Cleaned!" ${EOC}

RED= "\033[1;31m"
