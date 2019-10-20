/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 11:51:19 by hmiyake           #+#    #+#             */
/*   Updated: 2019/09/06 17:15:23 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		howmanytimes(int size)
{
	int	count;

	count = 0;
	while (size > 5)
	{
		size = size - size / 2;
		count++;
	}
	return (count);
}

void	give_size(int size, int *arr, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		arr[i] = size / 2;
		i++;
		size = size - size / 2;
	}
}

void	sort(t_stack *a, t_stack *b)
{
	int	arr[howmanytimes(a->size)];
	int	i;

	i = howmanytimes(a->size);
	give_size(a->size, arr, i);
	leave_smallest(a, b);
	while (i--)
		split_big_group(a, b, arr[i]);
}

int		main(int argc, char **argv)
{
	t_stack			*a;
	t_stack			*b;
	int				i;

	a = init();
	b = init();
	i = 0;
	if (argc < 2)
		return (0);
	get_args(argc, argv, a);
	if (is_sorted(a))
		return (0);
	sort(a, b);
	return (0);
}
