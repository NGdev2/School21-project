NAME			= so_long
NAME_BONUS		= so_long_bonus

SRC				=					\
				src/checker_map.c	\
				src/checker_ext.c	\
				src/draw_step.c		\
				src/ft_exit.c		\
				src/ft_keystroke.c	\
				src/ft_mlx_init.c	\
				src/moves.c			\
				src/parser.c		\
				src/main.c			\
				src/render_map.c	\
				src/so_long_utils.c \
				src/checker.c		\

SRC_BONUS		= 								\
				bonus/src/animation.c			\
				bonus/src/checker_ext.c			\
				bonus/src/checker_map.c			\
				bonus/src/checker.c				\
				bonus/src/draw_step.c			\
				bonus/src/ft_exit.c				\
				bonus/src/ft_keystroke.c		\
				bonus/src/ft_mlx_init.c			\
				bonus/src/main.c				\
				bonus/src/moves.c				\
				bonus/src/so_long_utils.c		\
				bonus/src/parser.c				\
				bonus/src/render_map.c			\
				bonus/src/ft_exit2.c
				

INC				= inc/so_long.h
INC_BONUS		= bonus/inc/so_long_bonus.h

CC				= gcc

CFLAGS			= -g -Wall -Wextra -Werror

MLX_CFLAGS		= -framework OpenGL -framework AppKit

OBJ				= $(patsubst %.c, %.o, $(SRC))

OBJ_BONUS		= $(patsubst %.c, %.o, $(SRC_BONUS))

MLX				= betamlx/libmlx.dylib

LIBFT			= Libft/libft.a

RM				= rm -rf

all				: $(MLX) $(LIBFT) $(NAME)

$(NAME)			: $(INC) ${SRC} $(OBJ)
				cp $(MLX) .
				$(CC) $(CFLAGS) $(OBJ) $(MLX) $(MLX_CFLAGS) -I$(INC) $(LIBFT) -o $(NAME)

$(NAME_BONUS)	: $(INC_BONUS) ${SRC_BONUS} $(OBJ_BONUS)
				cp $(MLX) .
				$(CC) $(CFLAGS) $(OBJ_BONUS) $(MLX) $(MLX_CFLAGS) -I$(INC_BONUS) $(LIBFT) -o $(NAME_BONUS)

$(LIBFT)		:
				make -C Libft

$(MLX)			:
				make -C $(dir $(MLX))

%.o				:	%.c
					gcc $(CFLAGS) -c $< -o $@ -I inc/ -I bonus/inc

re				: fclean all

c				:
				$(RM) $(OBJ) $(INC:%.h=%.h.gch)

bonus			: $(MLX) $(LIBFT) $(NAME_BONUS)

clean			:
				make fclean -C Libft
				$(RM) $(OBJ) $(OBJ_BONUS) $(INC:%.h=%.h.gch)

fclean			: clean
				$(RM) $(NAME)
				$(RM) libmlx.dylib
				$(RM) $(NAME_BONUS)
				make -C $(dir $(MLX)) clean

.PHONY			: all clean fclean re