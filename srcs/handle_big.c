/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_big.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 11:36:35 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 20:28:18 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		find_smallest_num(t_stack *a, int size)
{
	int		arr[size];
	int		i;
	t_node	*temp;

	i = 0;
	temp = a->top;
	while (i < size)
	{
		arr[i++] = temp->num;
		temp = temp->next;
	}
	quick_sort(arr, 0, size - 1);
	return (arr[0]);
}

void	leave_smallest(t_stack *a, t_stack *b)
{
	int	mid_num;
	int	half_size;

	while (a->size > 5)
	{
		mid_num = a->size % 2 ? find_mid_num(a, a->size, 's') :
		find_mid_num(a, a->size, 'b');
		half_size = (a->size / 2);
		while (half_size)
		{
			if (a->top->num < mid_num)
			{
				pb_print(b, a);
				half_size--;
			}
			else
				ra_print(a);
		}
	}
	if (a->size < 4)
		three_or_less(a);
	else
		five(a, b);
}

void	leave_smallest_at_top(t_stack *a, t_stack *b, int size)
{
	int	mid_num;
	int	need_to_be_sent;
	int	count;

	mid_num = size % 2 ? find_mid_num(a, size, 's') :
	find_mid_num(a, size, 'b');
	need_to_be_sent = (size / 2);
	count = 0;
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
	while (count--)
		rra_print(a);
}

void	split_small_group(t_stack *a, t_stack *b, int size)
{
	int	mid_num;
	int	need_to_be_sent;
	int	count;

	mid_num = size % 2 ? find_mid_num(b, size, 's') :
	find_mid_num(b, size, 'b');
	need_to_be_sent = (size - size / 2);
	count = 0;
	while (need_to_be_sent)
	{
		if (b->top->num < mid_num)
		{
			rb_print(b);
			count++;
		}
		else
		{
			pa_print(a, b);
			need_to_be_sent--;
		}
	}
	while (count--)
		rrb_print(b);
}

void	split_big_group(t_stack *a, t_stack *b, int size)
{
	int	arr[howmanytimes(size)];
	int	i;

	i = howmanytimes(size);
	give_size(size, arr, i);
	if (size < 6)
		return_five_or_less(a, b, size);
	else
	{
		split_small_group(a, b, size);
		size = (size - size / 2);
		while (size > 5)
		{
			leave_smallest_at_top(a, b, size);
			size = size - size / 2;
		}
		top_five_or_less(a, b, size);
		while (i--)
			split_big_group(a, b, arr[i]);
	}
}
