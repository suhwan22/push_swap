# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suhkim <suhkim@student.4seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 0/09/30 0:33:0 by suhkim            #+#    #+#              #
#    Updated: 2022/11/13 21:02:47 by suhkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS_NAME = checker

CC = cc
CFLAGS = -Werror -Wall -Wextra

SRC = exe_t_upper_n_lower.c \
	  exe_t_upper_n_upper.c \
	  exe_t_lower_n_lower.c \
	  exe_t_lower_n_upper.c \
	  exe_n_command.c \
	  exe_t_index.c \
	  cal_t_upper_n_lower.c \
	  cal_t_upper_n_upper.c \
	  cal_t_lower_n_lower.c \
	  cal_t_lower_n_upper.c \
	  get_num_of_commands.c \
	  get_parameters.c \
	  get_pos.c \
	  push_front.c \
	  push_back.c \
	  pop_front.c \
	  pop_back.c \
	  pa.c \
	  pb.c \
	  sa.c \
	  sb.c \
	  ss.c \
	  ra.c \
	  rb.c \
	  rr.c \
	  rra.c \
	  rrb.c \
	  rrr.c \
	  main.c \
	  divide.c \
	  arr_sort.c \
	  sort_two.c \
	  put_error.c \
	  init_info.c \
	  sort_three.c \
	  greedy_sort.c \
	  check_error.c \
	  already_sort.c \


BONUS_SRC = check_error_bonus.c \
			check_ans_bonus.c \
			pa_bonus.c \
	  		ft_isdigit_bonus.c \
			put_error_bonus.c \
			rrr_bonus.c \
			checker.c \
			pb_bonus.c \
			ra_bonus.c \
			sa_bonus.c \
			pop_back_bonus.c \
			rb_bonus.c \
			sb_bonus.c \
			exe_str_op_bonus.c \
			pop_front_bonus.c \
			rr_bonus.c \
			ss_bonus.c \
			get_parameters_bonus.c \
			push_back_bonus.c \
			rra_bonus.c	\
			valid_input_bonus.c \
			init_info_bonus.c \
			push_front_bonus.c \
			rrb_bonus.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)
RM = rm -f

all: $(NAME)

bonus: $(BONUS_NAME)

$(NAME): $(OBJ)
	@make -C ./libft
	$(CC) $(CFLAGS) -o $@ $^ -L./libft -lft

$(BONUS_NAME): $(BONUS_OBJ)
	@make -C ./libft
	@make -C ./libgnl
	$(CC) $(CFLAGS) -o $@ $^ -L./libft -lft -L./libgnl -lgnl

.c.o: $(SRC)
	$(CC) $(CFLAGS) -c $^

clean:
	@$(RM) $(OBJ)
	@$(RM) $(BONUS_OBJ)
	@make -C ./libft clean
	@make -C ./libgnl clean

fclean: clean
	@make -C ./libft fclean
	@make -C ./libgnl fclean
	@$(RM) $(NAME) $(BONUS_NAME)

re:	fclean all

.PHONY:all clean fclean re bonus
