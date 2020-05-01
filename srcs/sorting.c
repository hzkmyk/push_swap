/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:19:01 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 19:33:23 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		partition(int *arr, int left, int right)
{
	int i;
	int j;
	int temp;

	i = left - 1;
	j = left;
	while (j < right)
	{
		if (arr[j] < arr[right])
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		j++;
	}
	temp = arr[right];
	arr[right] = arr[i + 1];
	arr[i + 1] = temp;
	return (i + 1);
}

void	quick_sort(int *arr, int left, int right)
{
	int	pivot;

	if (left < right)
	{
		pivot = partition(arr, left, right);
		quick_sort(arr, left, pivot - 1);
		quick_sort(arr, pivot + 1, right);
	}
}

int		is_sorted(t_stack *stack)
{
	t_node	*temp;

	temp = stack->top;
	while (temp && temp->next)
	{
		if (temp->num > temp->next->num)
			return (0);
		temp = temp->next;
	}
	return (1);
}
