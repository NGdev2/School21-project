NAME		= push_swap
SORT_OP		= sort_operations/*.c
SRCS		= \
			main.c				\
			src/split_free.c	\
			src/full_clean.c	\
			src/is_dig.c		\
			src/ft_exit.c		\
			src/make_stack.c	\
			src/check_dubl.c	\
			src/push_to_b.c		\
			src/sort_three.c	\
			src/sort_two.c		\
			src/push_to_a.c		\
			src/pos_in_a.c		\
			src/comfort_nb.c	\
			src/oper_to_push.c	\
			src/cases.c			\
			src/ft_last.c		\
			src/finalsort.c		\
			src/sort_five.c		\
		
ALGS		= \
			sort_operations/sa.c \
			sort_operations/sb.c \
			sort_operations/ss.c \
			sort_operations/pb.c \
			sort_operations/pa.c \
			sort_operations/ra.c \
			sort_operations/rb.c \
			sort_operations/rr.c \
			sort_operations/rra.c \
			sort_operations/rrb.c \
			sort_operations/rrr.c

SRCS_B		= \
			checker_dir/sort_operations/*.c		\
			checker_dir/check_dubl_checker.c	\
			checker_dir/checker_utils.c			\
			checker_dir/checker.c				\
			checker_dir/ft_exit_checker.c		\
			checker_dir/ft_split_checker.c		\
			checker_dir/get_next_line_ckecker.c	\
			checker_dir/make_stack_checker.c	\
			checker_dir/is_dig_checker.c		\
			checker_dir/libft_utils.c			\
			checker_dir/split_free_checker.c	\
			checker_dir/full_clean_checker.c

INC_B		= checker_dir/checker.h

OBJS		= ${SRCS:%.c=%.o} ${ALGS:%.c=%.o}
INC			= inc/push_swap.h

LIBFT		= libft
FLAGS		= -Wall -Wextra -Werror
CC			= gcc
RM			= rm -rf

LFT			=	libft/libft.a

.PHONY		: all clean fclean re hello parrot

all			: $(LFT) $(NAME) grogu hello

$(NAME)		: $(INC) ${SRCS} ${ALGS}
			$(CC) $(FLAGS) $(SRCS) $(ALGS) -I$(INC) $(LFT) -o $(NAME)
			@echo $(BLUE) "Push swap Created!" $(EOC)

%.o			: %.c ${INC}
			gcc ${FLAGS} -c $< -o $@

$(LFT):
			make -s -C libft
			@echo $(green) "Libft Created!" $(EOC)

bonus		:
			$(CC) $(FLAGS) $(SRCS_B) -I$(INC_B) -o "checker"

bclean		:
			$(RM) "checker"

clean		:
			make clean -s -C libft
			$(RM) $(OBJS) $(INC:%.h=%.h.gch)
			@echo ${RED} "${NAME} Objects Cleaned!" ${EOC}
			
fclean		: clean
			$(RM) $(LFT)
			$(RM) $(NAME)
			@echo ${YELLOW} "${NAME} Precompile Cleaned!" ${EOC}

re			: fclean all

run         :
				./push_swap 1 4 2 -34 0

hello		:
			@echo ${violet} "HELLO" ${EOC}
			@say -v Yuri ВИРТУАЛЬНОЕ ПРОСТРАНСТВО ЗАГРУЖЕНО. К ВАШИМ УСЛУГАМ, СЭР

grogu		:
			clear
			@echo $(green)"⣤⣀⣀"$(EOC)"⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄"$(green)"⣀⣤⡶⠚⢋⡉⠁⠇⠸⠉⠋⠓⠦⣤⣀"$(EOC)
			@echo $(green)"⠹⣿⣽⣿⣿⣷⣶⣶⣦⣤⣤⣴⣶⡾⠿⣦⣾⠟⠁⠄⠘⠉⠁⠄⣀⣀⡀⠘⠛⠓⠈⠙⢷⣤⡶⢶⣶⣤⣀⣀⠄⠄⠄⣀⣀⣠⣤⣴⢶⡇"$(EOC)
			@echo ⠄$(green)"⠘⣷⣍⠙⠛⠿⠿⣿⣭⣿⣯⣭⡄⠄⣿⠃⠠⢞⣛⣛⠷⣦⠘⠉⠉⠙⢀⡴⠚⠛⠶⠄⢻⡇⠄⠙⠛⠿⠿⠿⠿⢿⣟⣛⣯⡽⣾⡟"$(EOC)
			@echo ⠄⠄$(green)"⠈⢿⣷⣄⠄⠄⠄⠄⠄⠄⢸⣇⠄⠇⢠⣾⣟⣻⣿⣷⣌⠄⠄⠄⠄⢨⣶⢻⣿⣿⣦⡀⠇⢀⡿⠛⠻⠟⠛⠛⠛⠋⠉⣡⣾⠏"$(EOC)
			@echo ⠄⠄⠄$(green)"⠈⠻⣿⣷⣄⡀⠄⠄⠄⠘⣿⡆⢠⡿⣿⣿⣿⣿⣿⣿⡄⠄⠄⢠⣿⣿⣿⣿⣿⣿⣷⢀⣾⡇⠄⠄⠄⠄⠄⠄⣠⣾⡿⠁"$(EOC)
			@echo ⠄⠄⠄⠄⠄$(green)"⠈⠻⣿⣿⣦⣀⠄⠄⠹⣧⠄⠙⠛⠻⠿⠿⠿⠛⠑⢏⡉⠊⠛⠿⠿⠿⠟⠛⠁⣸⡟⠄⠄⠄⠄⣠⣴⣿⡿⠋"$(EOC)
			@echo ⠄⠄⠄⠄⠄⠄⠄$(green)"⠈⠙⠻⠿⣿⣶⣤⣽⣆⠄⠄⠄⠄⠄⢲⣦⣴⣶⣶⣦⣤⡶⠄⠄⠄⠄⣠⣿⣤⣤⣴⣶⡿⠿⠛⠁"$(EOC)
			@echo ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄$(green)"⣴⣏⠳⣤⣀⣀⣀⣀⣙⣳⠶⠶⢟⣋⡀⢀⣀⣤⡶⠋⢹"$(EOC)
			@echo ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄$(green)"⣸⠛⢻⣄⠈⠙⠛⠿⠿⠿⠿⠟⠻⡟⠛⠛⠛⠛⠉⢀⣠⡟⢳⡄"$(EOC)
			@echo ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄$(green)"⣸⣧⣄⠹⢿⣦⣤⣀⣀⣀⣀⣀⣠⣧⣤⣤⣤⣴⣾⡿⠋⠄⣀⡇"$(EOC)
			@echo ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄$(green)"⡼⠓⣄⢹⣧⠄⠈⠉⠉⠉⠉⠉⠁⠘⡇⠄⠄⠄⠄⠄⠄⢠⡿⠋⢣"$(EOC)
			@echo ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄$(green)"⢳⣤⠛⣶⡿⠄⠄⠄⠄⠄⠄⠄⠄⠄⣷⠄⠄⠄⠄⠄⠄⣿⡇⣴⠉⢳"$(EOC)
			@echo ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄$(green)"⢀⣿⠙⠚⠋⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣿⡄⠄⠄⠄⠄⠄⠙⢧⣨⣶⠏"$(EOC)
			@echo ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄$(green)"⢠⣾⠟⢷⣄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣿⡇⠄⠄⠄⠄⠄⠄⠄⣁⣼⣷⣄"$(EOC)
			@echo ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄$(green)"⣾⡿⠄⠄⠉⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣿⡇⠄⠄⠄⠄⠄⠄⠄⠋⠁⠘⣿⡄"$(EOC)
			@echo ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄$(green)"⣿⣧⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣿⡇⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢹⣷"$(EOC)
			@echo ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄$(green)"⠘⣿⣄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣸⣟⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣾⠟"$(EOC)
			@echo ⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄$(green)"⠉⠛⠛⠛⠛⠋⠉⠉⠉⠉⠉⠉⠉⠁⠉⠛⠛⠛⠒⠒⠒⠒⠛⠉⠉⠉⠁"$(EOC)

thank_you	:
	@clear
	@echo '      (`-`;-"```"-;`-`)'
	@echo "       \.'         './"
	@echo "       /             \ "
	@echo "       ;   0     0   ;"
	@echo "      /| =         = |\ "
	@echo "     ; \   '._Y_.'   / ;"
	@echo "    ;   '-._ \|/ _.-'   ;"
	@echo '   ;        `"""`        ;'
	@echo '   ;   `""-.      .-""`  ;'
	@echo "   /; ' --._ \ / _.-- ' ;\ "
	@echo "  :  '.   '/|| ||\'   .'  :"
	@echo "   '.  '-._       _.-'  .'"
	@echo "   (((-''  '''''''  ''-)))"


# parrot		:
# 			echo "\
# 			________________________________________PPPPPPPPP/___PPP \
# 			____________________________________PPPPPPPPP/_____(\&)_PPPP\
# 			________________________________PPPPPPPPPPP/____________PPPP \
# 			_____________________________PPPPPPPPPPPPPPP/____PPPP_____P \
# 			___________________________PPPPPPPPPPPPPPPPPPPPPP_PPP_____P \
# 			_________________________PPPPPPPPPPPPPPPPPPPPPPPPPP_P____P \
# 			______________________PPPPPPPPPPPPPPPPPP_PPPP___PPP__P_P \
# 			____________________PPPPPPPPPPPPP_PPPPPPPP_P________P \
# 			___________________PPPPPPPPPPPPPPPPPPPPPPPP_P \
# 			_________________PPPPPPPPP_PPPPPPPPPPPPPPPP_P \
# 			_______________PPPPPPPPPPPPP_PPPPPPPPPPPPPPP_P \
# 			_____________PPPPPPP_PPPPPPPPPPPPPPPPPPPP_PPP \
# 			____________PPPPPP_PPPPPPPPPPPPPPPPPPPPP_PPP \
# 			___________PPPPP_PPPPPPPPPPPPPPPPPPPPP_PPPPP \
# 			__________PPPPP_PPPPPPPPPPPPPPPPPPPP_PPPPPP \
# 			_________PPPP_PP0PPPPPPPPPPPPPPPP_PPPPPPP \
# 			________PPP_000PPP00PPPPP000P00P_PPPPPP \
# 			________PP_0000PP0000PPP00P0P_PPPPPP \
# 			_______P_0000PP00000P0000_PPPPPPP \
# 			_____PP00000P000P0000_PPPPPPPP \
# 			___P00000P0000000_PPPPPPPPPP \
# 			___000P00000P_PPPPPPPPPPPPPPPPP___......\
# 			__0000P00PPPPPPPPPPPPPP__PPPPPPPPPPPPP \
# 			_000P0_PPPPPPPPPPPPP_P000_PPPPPP_0000000000000000000 \
# 			00____PPPPPPPPPPPP_PP00000_PPPP_00000000000000000000 \
# 			______PPPPPPPPPPP_PPP_’’______PPP__’’ \
# 			_____PPPPPPPPP \
# 			____PPPPPPPPP \
# 			___PPPPPPPP \
# 			__PPPPPPPP\
# 			_PPPPPPPP \
# 			PPPPPPPP \
# 			PPPPPPP \
# 			PPPPPP \
# 			PPPP \
# 			PPP\
# 			P "

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
