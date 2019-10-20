/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_command.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 11:24:21 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 16:09:13 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	run_command2(t_stack *a, t_stack *b, int num)
{
	if (num == 1)
		sa_sb(a);
	else if (num == 2)
		sa_sb(b);
	else if (num == 3)
		ss(a, b);
	else if (num == 4)
		pa_pb(a, b);
	else if (num == 5)
		pa_pb(b, a);
	else if (num == 6)
		ra_rb(a);
	else if (num == 7)
		ra_rb(b);
	else if (num == 8)
		rr(a, b);
	else if (num == 9)
		rra_rrb(a);
	else if (num == 10)
		rra_rrb(b);
	else if (num == 11)
		rrr(a, b);
	else
		print_error();
}

void	run_command(t_stack *command, t_stack *a, t_stack *b)
{
	t_node	*temp;

	while ((temp = command->top))
	{
		run_command2(a, b, temp->num);
		pop(command);
	}
}
