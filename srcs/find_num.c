/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:55:00 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/28 22:13:41 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node	*find_bottom(t_stack *stack)
{
	t_node	*bottom;

	bottom = stack->top;
	while (bottom->next)
		bottom = bottom->next;
	return (bottom);
}

int		find_mid_num(t_stack *a, int size, char small_or_big)
{
	int		arr[size];
	int		i;
	t_node	*temp;
	int		mid_num;

	i = 0;
	temp = a->top;
	while (i < size)
	{
		arr[i++] = temp->num;
		temp = temp->next;
	}
	quick_sort(arr, 0, size - 1);
	if (small_or_big == 's')
		mid_num = arr[(size - 1) / 2];
	else
		mid_num = arr[(size - 1) / 2 + 1];
	return (mid_num);
}
