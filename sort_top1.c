/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_top1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 17:48:29 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 17:51:31 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		sort_top_four2(t_stack *a, t_stack *b, int count)
{
	int	mid_num;
	int	need_to_be_sent;

	mid_num = find_mid_num(a, 4, 'b');
	need_to_be_sent = 2;
	while (need_to_be_sent)
	{
		if (a->top->num < mid_num)
		{
			pb_print(b, a);
			need_to_be_sent--;
		}
		else
		{
			ra_print(a);
			count++;
		}
	}
	return (count);
}

void	sort_top_four(t_stack *a, t_stack *b)
{
	int	count;

	count = 0;
	if (is_sorted(a))
		return ;
	count = sort_top_four2(a, b, count);
	while (count--)
		rra_print(a);
	if (!is_sorted(a))
		sa_print(a);
	pa_print(a, b);
	pa_print(a, b);
	if (!is_sorted(a))
		sa_print(a);
}

void	sort_top_five3(t_stack *a, t_stack *b, int smallest)
{
	if (a->top->next->next->next->num == smallest)
	{
		ra_print(a);
		ra_print(a);
		sa_print(a);
		pb_print(b, a);
		rra_print(a);
		rra_print(a);
		sort_top_four(a, b);
		pa_print(a, b);
	}
	else if (a->top->next->next->next->next->num == smallest)
	{
		ra_print(a);
		ra_print(a);
		ra_print(a);
		sa_print(a);
		pb_print(b, a);
		rra_print(a);
		rra_print(a);
		rra_print(a);
		sort_top_four(a, b);
		pa_print(a, b);
	}
}

void	sort_top_five2(t_stack *a, t_stack *b, int smallest)
{
	if (a->top->num == smallest)
	{
		pb_print(b, a);
		sort_top_four(a, b);
		pa_print(a, b);
	}
	else if (a->top->next->num == smallest)
	{
		sa_print(a);
		pb_print(b, a);
		sort_top_four(a, b);
		pa_print(a, b);
	}
	else if (a->top->next->next->num == smallest)
	{
		ra_print(a);
		sa_print(a);
		pb_print(b, a);
		rra_print(a);
		sort_top_four(a, b);
		pa_print(a, b);
	}
}

void	sort_top_five(t_stack *a, t_stack *b)
{
	int	smallest;

	smallest = find_smallest_num(a, 5);
	if (is_sorted(a))
		return ;
	sort_top_five2(a, b, smallest);
	sort_top_five3(a, b, smallest);
}
