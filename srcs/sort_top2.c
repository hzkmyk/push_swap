/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_top2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 17:50:51 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 17:51:24 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	bigger_than_mid3(t_stack *a)
{
	if (a->top->next->num > a->top->next->next->num)
	{
		sa_print(a);
		ra_print(a);
		sa_print(a);
		rra_print(a);
		sa_print(a);
	}
	else
	{
		sa_print(a);
		ra_print(a);
		sa_print(a);
		rra_print(a);
	}
}

void	mid3(t_stack *a)
{
	if (a->top->next->num > a->top->next->next->num)
	{
		ra_print(a);
		sa_print(a);
		rra_print(a);
		sa_print(a);
	}
	else
		sa_print(a);
}

void	sort_top_three(t_stack *a)
{
	int	mid_num;

	mid_num = find_mid_num(a, 3, 's');
	if (is_sorted(a))
		return ;
	if (a->top->num > mid_num)
		bigger_than_mid3(a);
	else if (a->top->num == mid_num)
		mid3(a);
	else
	{
		if (a->top->next->num > a->top->next->next->num)
		{
			ra_print(a);
			sa_print(a);
			rra_print(a);
		}
	}
}

void	top_five_or_less(t_stack *a, t_stack *b, int size)
{
	if (is_sorted(a))
		return ;
	if (size == 3)
		sort_top_three(a);
	else if (size == 4)
		sort_top_four(a, b);
	else
		sort_top_five(a, b);
}
