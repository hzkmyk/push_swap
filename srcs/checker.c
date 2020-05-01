/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 21:41:11 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 18:16:50 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	save_command(char *input, t_stack *command)
{
	if (!ft_strcmp("sa", input))
		push_backwords(command, 1);
	else if (!ft_strcmp("sb", input))
		push_backwords(command, 2);
	else if (!ft_strcmp("ss", input))
		push_backwords(command, 3);
	else if (!ft_strcmp("pa", input))
		push_backwords(command, 4);
	else if (!ft_strcmp("pb", input))
		push_backwords(command, 5);
	else if (!ft_strcmp("ra", input))
		push_backwords(command, 6);
	else if (!ft_strcmp("rb", input))
		push_backwords(command, 7);
	else if (!ft_strcmp("rr", input))
		push_backwords(command, 8);
	else if (!ft_strcmp("rra", input))
		push_backwords(command, 9);
	else if (!ft_strcmp("rrb", input))
		push_backwords(command, 10);
	else if (!ft_strcmp("rrr", input))
		push_backwords(command, 11);
	else
		push_backwords(command, 0);
}

int		main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*command;
	char	*input;

	if (argc < 2)
		return (0);
	a = init();
	get_args(argc, argv, a);
	if (is_empty(a))
		print_error();
	b = init();
	command = init();
	while (get_next_line(0, &input) > 0)
	{
		save_command(input, command);
		if (input)
			ft_strdel(&input);
	}
	run_command(command, a, b);
	print_result(a, b);
	return (0);
}
