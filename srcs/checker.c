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

t_dsptch	g_dsptch_table[FUNCNUM] = {
	{"sa"},
	{"sb"},
	{"ss"},
	{"pa"},
	{"pb"},
	{"ra"},
	{"rb"},
	{"rr"},
	{"rra"},
	{"rrb"},
	{"rrr"},
};

void	dispatch(char *input, t_stack *command)
{
	int	i;

	i = 1;
	while (i < FUNCNUM + 1)
	{
		if (ft_strequ(g_dsptch_table[i - 1].name, input))
		{
			push_backwords(command, i);
			return ;
		}
		i++;
	}
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
		dispatch(input, command);
		// save_command(input, command);
		if (input)
			ft_strdel(&input);
	}
	run_command(command, a, b);
	print_result(a, b);
	return (0);
}
