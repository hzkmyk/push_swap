/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 15:44:02 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 20:28:29 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../libft/libft.h"
# include "../libft/ft_printf.h"

typedef struct		s_stack {
	struct s_node	*top;
	int				size;
}					t_stack;

typedef struct		s_node {
	int				num;
	struct s_node	*next;
}					t_node;

/*
** adt.c
*/
t_stack				*init(void);
int					is_empty(t_stack *stack);
void				push(t_stack *stack, int num);
void				push_backwords(t_stack *stack, int num);
int					pop(t_stack *stack);

/*
** command1.c
*/
void				sa_sb(t_stack *stack);
void				ss(t_stack *stack_a, t_stack *stack_b);
void				pa_pb(t_stack *stack_one, t_stack *stack_two);
void				ra_rb(t_stack *stack);
void				rr(t_stack *stack_a, t_stack *stack_b);

/*
** command2.c
*/
void				rra_rrb(t_stack *stack);
void				rrr(t_stack *stack_a, t_stack *stack_b);

/*
** sorting.c
*/
void				quick_sort(int *arr, int left, int right);
int					is_sorted(t_stack *stack);

/*
** print.c
*/
void				print_stack(t_stack *stack);
void				print_error(void);
void				print_result(t_stack *a, t_stack *b);
void				rrr_print(t_stack *a, t_stack *b);

/*
** print_command1.c
*/
void				sa_print(t_stack *a);
void				sb_print(t_stack *b);
void				ss_print(t_stack *a, t_stack *b);
void				pa_print(t_stack *a, t_stack *b);
void				pb_print(t_stack *b, t_stack *a);

/*
** print_command2.c
*/
void				ra_print(t_stack *a);
void				rb_print(t_stack *b);
void				rr_print(t_stack *a, t_stack *b);
void				rra_print(t_stack *a);
void				rrb_print(t_stack *b);

/*
** push_swap.c
*/
void				give_size(int size, int *arr, int howmanytimes);
int					howmanytimes(int size);
void				sort(t_stack *a, t_stack *b);

/*
** find_num.c
*/
int					find_mid_num(t_stack *a, int size, char small_or_big);
t_node				*find_bottom(t_stack *stack);

/*
** handle_big.c
*/
void				leave_smallest(t_stack *a, t_stack *b);
void				top_five_or_less(t_stack *a, t_stack *b, int size);
int					find_smallest_num(t_stack *a, int size);
void				split_big_group(t_stack *a, t_stack *b, int size);

/*
** handle_small.c
*/
void				three_or_less(t_stack *a);
void				five(t_stack *a, t_stack *b);

/*
** parse_argv.c
*/
int					howmany_mallocs(char *argv);
char				**parse_arg(char *argv);

/*
** duplicate_check.c
*/
int					is_dup(unsigned int num);

/*
** free.c
*/
void				free_array(char **arr, int num);

/*
** run_command.c
*/
void				run_command(t_stack *command, t_stack *a, t_stack *b);

/*
** handle_args.c
*/
void				get_args(int argc, char **argv, t_stack *a);

/*
** return_numbers1.c
*/
void				return_three(t_stack *a, t_stack *b);
void				return_five_or_less(t_stack *a, t_stack *b, int size);

/*
** return_numbers2.c
*/
void				return_four(t_stack *a, t_stack *b);
void				return_five(t_stack *a, t_stack *b);

/*
** sort_top1.c
*/
void				sort_top_four(t_stack *a, t_stack *b);
void				sort_top_five(t_stack *a, t_stack *b);

/*
** sort_top2.c
*/
void				sort_top_three(t_stack *a);
void				top_five_or_less(t_stack *a, t_stack *b, int size);

#endif
