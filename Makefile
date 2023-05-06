###################### NAME #########################
NAME	= push_swap
NAME_BONUS = checker

#################### SOURCES ########################

SRCS		=	src/main.c src/instructions.c \
			src/triage.c src/verif.c  \
			src/mediane.c src/quick_sort.c \
			src/atoi.c src/instruction2.c \
			src/instruction3.c src/meilleur_solution.c \
			src/sorting.c src/execute.c src/exit_free.c 

SRCS_BONUS	=	src_bonus/atoi_BONUS.c src_bonus/checker_instruction.c \
			src_bonus/checker_instruction2.c src_bonus/checker_instruction3.c \
			src_bonus/execute_BONUS.c src_bonus/exit_free_BONUS.c src_bonus/main_BONUS.c \
			src_bonus/verif_BONUS.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c \
			src_bonus/checker.c

#################### VARIABLES ##########################

LIB		= ft_printf/printf.a
OBJS		= $(SRCS:.c=.o)
OBJS_BONUS 	= $(SRCS_BONUS:.c=.o)
RM		= @rm -f
CC		= @cc
CFLAGS		= -Wall -Wextra -Werror

###################### REGELS ###########################

all		:	$(NAME)

$(NAME)		:	$(OBJS)
		  		@make --no-print-directory -C ft_printf/
		  		$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME)

bonus		:	re $(OBJS_BONUS)
		  		$(CC) $(CFlAGS) $(OBJS_BONUS) $(LIB) -o $(NAME_BONUS)

clean		:
				$(RM) $(OBJS) $(OBJS_BONUS)

fclean		:	clean
				$(RM) $(NAME)
				$(RM) $(NAME_BONUS)

re		:	fclean all

.PHONY		:	all clean fclean re
