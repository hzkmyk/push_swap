/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adt.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 17:07:42 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 15:00:23 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init(void)
{
	t_stack *stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->top = NULL;
	stack->size = 0;
	return (stack);
}

int		is_empty(t_stack *stack)
{
	if (stack->top == NULL)
		return (1);
	return (0);
}

void	push(t_stack *stack, int num)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	new->num = num;
	new->next = stack->top;
	stack->top = new;
	stack->size++;
}

void	push_backwords(t_stack *stack, int num)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	new->num = num;
	new->next = NULL;
	if (is_empty(stack))
		stack->top = new;
	else
		find_bottom(stack)->next = new;
	stack->size++;
}

int		pop(t_stack *stack)
{
	t_node	*temp;
	int		num;

	temp = stack->top;
	stack->top = stack->top->next;
	num = temp->num;
	stack->size--;
	free(temp);
	return (num);
}
