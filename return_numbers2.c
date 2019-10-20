/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_numbers2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 17:29:09 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 20:43:22 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	return_four2(t_stack *a, t_stack *b, int smallest)
{
	if (b->top->next->next->num == smallest)
	{
		pa_print(a, b);
		pa_print(a, b);
		sb_print(b);
		pa_print(a, b);
		sort_top_three(a);
		pa_print(a, b);
	}
	else if (b->top->next->next->next->num == smallest)
	{
		pa_print(a, b);
		pa_print(a, b);
		pa_print(a, b);
		sort_top_three(a);
		pa_print(a, b);
	}
}

void	return_four(t_stack *a, t_stack *b)
{
	int	smallest;

	smallest = find_smallest_num(b, 4);
	if (b->top->num == smallest)
	{
		rb_print(b);
		return_three(a, b);
		rrb_print(b);
		pa_print(a, b);
	}
	else if (b->top->next->num == smallest)
	{
		sb_print(b);
		rb_print(b);
		return_three(a, b);
		rrb_print(b);
		pa_print(a, b);
	}
	return_four2(a, b, smallest);
}

void	return_five3(t_stack *a, t_stack *b, int smallest)
{
	if (b->top->next->next->next->num == smallest)
	{
		pa_print(a, b);
		pa_print(a, b);
		pa_print(a, b);
		rb_print(b);
		pa_print(a, b);
		sort_top_four(a, b);
		rrb_print(b);
		pa_print(a, b);
	}
	else if (b->top->next->next->next->next->num == smallest)
	{
		return_four(a, b);
		pa_print(a, b);
	}
}

void	return_five2(t_stack *a, t_stack *b, int smallest)
{
	if (b->top->next->num == smallest)
	{
		sb_print(b);
		rb_print(b);
		return_four(a, b);
		rrb_print(b);
		pa_print(a, b);
	}
	else if (b->top->next->next->num == smallest)
	{
		pa_print(a, b);
		pa_print(a, b);
		rb_print(b);
		pa_print(a, b);
		pa_print(a, b);
		sort_top_four(a, b);
		rrb_print(b);
		pa_print(a, b);
	}
}

void	return_five(t_stack *a, t_stack *b)
{
	int	smallest;

	smallest = find_smallest_num(b, 5);
	if (b->top->num == smallest)
	{
		rb_print(b);
		return_four(a, b);
		rrb_print(b);
		pa_print(a, b);
	}
	return_five2(a, b, smallest);
	return_five3(a, b, smallest);
}
