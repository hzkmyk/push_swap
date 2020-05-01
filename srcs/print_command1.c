/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_command1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:22:12 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 14:35:23 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa_print(t_stack *a)
{
	sa_sb(a);
	ft_printf("sa\n");
}

void	sb_print(t_stack *b)
{
	sa_sb(b);
	ft_printf("sb\n");
}

void	ss_print(t_stack *a, t_stack *b)
{
	sa_sb(a);
	sa_sb(b);
	ft_printf("ss\n");
}

void	pa_print(t_stack *a, t_stack *b)
{
	pa_pb(a, b);
	ft_printf("pa\n");
}

void	pb_print(t_stack *b, t_stack *a)
{
	pa_pb(b, a);
	ft_printf("pb\n");
}
