# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/09 16:38:11 by hmiyake           #+#    #+#              #
#    Updated: 2019/09/02 20:33:28 by hmiyake          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = checker
NAME2 = push_swap

CFILES1 := $(addprefix ./srcs/, checker.c \
		adt.c \
		command.c \
		print.c \
		sorting.c \
		duplicate_check.c \
		free.c \
		run_command.c \
		find_num.c \
		handle_args.c )

CFILES2 = $(addprefix ./srcs/, push_swap.c \
		adt.c \
		command.c \
		print.c \
		handle_small.c \
		handle_big.c \
		find_num.c \
		print_command.c \
		sorting.c \
		duplicate_check.c \
		free.c \
		handle_args.c \
		return_numbers.c \
		sort_top1.c \
		sort_top2.c )

OFILES1 := $(CFILES1:.c=.o)

OFILES2 := $(CFILES2:.c=.o)

INCLUDES := -I includes

LIBFT := ./libft/

LDFLAGS := -L $(LIBFT) -lft

CFLAGS := -Wall -Werror -Wextra

all: $(NAME1) $(NAME2)

$(NAME1): $(OFILES1)
	@make -C $(LIBFT)
	@$(CC) -o $@ $^ libft/libft.a $(LDFLAGS)

$(NAME2): $(OFILES2)
	@$(CC) -o $@ $^ libft/libft.a $(LDFLAGS)

clean:
	@make -C libft/ clean
	@rm -f $(OFILES1)
	@rm -f $(OFILES2)

fclean: clean
	@make -C libft/ fclean
	@rm -f $(NAME1)
	@rm -f $(NAME2)

re: fclean all
