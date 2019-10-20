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

SRCS1 = checker.c \
		adt.c \
		command1.c \
		command2.c \
		print.c \
		sorting.c \
		duplicate_check.c \
		free.c \
		run_command.c \
		find_num.c \
		handle_args.c

SRCS2 = push_swap.c \
		adt.c \
		command1.c \
		command2.c \
		print.c \
		handle_small.c \
		handle_big.c \
		find_num.c \
		print_command1.c \
		print_command2.c \
		sorting.c \
		duplicate_check.c \
		free.c \
		handle_args.c \
		return_numbers1.c \
		return_numbers2.c \
		sort_top1.c \
		sort_top2.c 

SRCO1 = checker.o \
		adt.o \
		command1.o \
		command2.o \
		print.o \
		sorting.o \
		duplicate_check.o \
		free.o \
		run_command.o \
		find_num.o \
		handle_args.o

SRCO2 = push_swap.o \
		adt.o \
		command1.o \
		command2.o \
		print.o \
		handle_small.o \
		handle_big.o \
		find_num.o \
		print_command1.o \
		print_command2.o \
		sorting.o \
		duplicate_check.o \
		free.o \
		handle_args.o \
		return_numbers1.o \
		return_numbers2.o \
		sort_top1.o \
		sort_top2.o

FLAGS = -Wall -Wextra -Werror -c

LIBFT = libft -lft

F = -fsanitize=address

all: $(NAME1) $(NAME2)

$(NAME1): 
	@make -C $(LIBFT)
	@gcc $(FLAGS) $(SRCS1) -I.
	@gcc $(SRCO1) -L $(LIBFT) -o $(NAME1) 

$(NAME2): 
	@gcc $(FLAGS) $(SRCS2) -I.
	@gcc $(SRCO2) -L $(LIBFT) -o $(NAME2)

clean:
	@make -C libft/ clean
	@rm -f $(SRCO1)
	@rm -f $(SRCO2)

fclean: clean
	@make -C libft/ fclean
	@rm -f $(NAME1)
	@rm -f $(NAME2)

re: fclean all
