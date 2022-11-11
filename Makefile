# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suhkim <suhkim@student.4seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 0/09/30 0:33:0 by suhkim            #+#    #+#              #
#    Updated: 2022/11/12 04:56:38 by suhkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
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
	  already_sort.c

OBJ = $(SRC:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@make -C ./libft
	$(CC) $(CFLAGS) -o $@ $^ -L./libft -lft

.c.o: $(SRC)
	$(CC) $(CFLAGS) -c $^

clean:
	$(RM) $(OBJ)
	@make -C ./libft clean

fclean: clean
	@make -C ./libft fclean
	$(RM) $(NAME) $(LIBFT)

re:	fclean all

.PHONY:all clean fclean re
