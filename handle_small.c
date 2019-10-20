/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_small.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:56:29 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 20:46:34 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three(t_stack *a, int mid_num)
{
	if (mid_num == a->top->num)
	{
		if (find_bottom(a)->num < a->top->num)
			rra_print(a);
		else
			sa_print(a);
	}
	else if (mid_num == find_bottom(a)->num)
	{
		if (mid_num < a->top->num)
			ra_print(a);
		else
		{
			sa_print(a);
			ra_print(a);
		}
	}
	else
	{
		if (a->top->num > mid_num)
		{
			sa_print(a);
			rra_print(a);
		}
	}
}

void	three_or_less(t_stack *a)
{
	int mid_num;

	mid_num = find_mid_num(a, a->size, 's');
	if (is_sorted(a))
		return ;
	if (a->size == 2)
	{
		if (!is_sorted(a))
			sa_print(a);
		return ;
	}
	three(a, mid_num);
}

void	five(t_stack *a, t_stack *b)
{
	int mid_num;
	int need_to_be_sent;
	int origin_a_size;

	mid_num = find_mid_num(a, a->size, 's');
	need_to_be_sent = a->size - 3;
	origin_a_size = a->size;
	if (is_sorted(a))
		return ;
	while (need_to_be_sent)
	{
		while (mid_num <= a->top->num)
			ra_print(a);
		pb_print(b, a);
		need_to_be_sent--;
	}
	three_or_less(a);
	if (origin_a_size == 5)
	{
		if (b->top->num < b->top->next->num)
			sb_print(b);
		pa_print(a, b);
	}
	pa_print(a, b);
}
