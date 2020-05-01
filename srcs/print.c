/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 13:10:59 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 14:36:28 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stack(t_stack *stack)
{
	t_node *temp;

	temp = stack->top;
	if (!is_empty(stack))
	{
		while (temp)
		{
			ft_printf("%d\n", temp->num);
			temp = temp->next;
		}
	}
}

void	print_error(void)
{
	write(2, "Error\n", 7);
	exit(1);
}

void	print_result(t_stack *a, t_stack *b)
{
	if (is_sorted(a) && is_empty(b))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

void	rrr_print(t_stack *a, t_stack *b)
{
	rra_rrb(a);
	rra_rrb(b);
	ft_printf("rrr\n");
}
