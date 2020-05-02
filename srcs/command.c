/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:23:54 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 20:43:57 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa_sb(t_stack *stack)
{
	t_node	*one;
	t_node	*two;

	if (stack->top && stack->top->next)
	{
		one = stack->top;
		two = stack->top->next;
		one->next = two->next;
		two->next = one;
		stack->top = two;
	}
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa_sb(stack_a);
	sa_sb(stack_b);
}

void	pa_pb(t_stack *stack_one, t_stack *stack_two)
{
	int	temp;

	if (!is_empty(stack_two))
	{
		temp = pop(stack_two);
		push(stack_one, temp);
	}
}

void	ra_rb(t_stack *stack)
{
	t_node	*temp1;
	t_node	*temp2;

	if (!is_empty(stack) && stack->top->next)
	{
		temp1 = stack->top;
		temp2 = stack->top;
		stack->top = stack->top->next;
		while (temp1->next)
			temp1 = temp1->next;
		temp1->next = temp2;
		temp2->next = NULL;
	}
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra_rb(stack_a);
	ra_rb(stack_b);
}

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
