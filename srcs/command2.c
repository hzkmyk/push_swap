/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 18:08:25 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/28 22:12:04 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra_rrb(t_stack *stack)
{
	t_node	*temp;

	temp = stack->top;
	if (!is_empty(stack) && stack->top->next)
	{
		while (temp->next->next)
			temp = temp->next;
		push(stack, temp->next->num);
		stack->size -= 1;
		free(temp->next);
		temp->next = NULL;
	}
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra_rrb(stack_a);
	rra_rrb(stack_b);
}
