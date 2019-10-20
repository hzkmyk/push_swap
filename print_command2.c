/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_command2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:22:53 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 19:20:55 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_print(t_stack *a)
{
	ra_rb(a);
	ft_printf("ra\n");
}

void	rb_print(t_stack *b)
{
	ra_rb(b);
	ft_printf("rb\n");
}

void	rr_print(t_stack *a, t_stack *b)
{
	ra_rb(a);
	ra_rb(b);
	ft_printf("rr\n");
}

void	rra_print(t_stack *a)
{
	rra_rrb(a);
	ft_printf("rra\n");
}

void	rrb_print(t_stack *b)
{
	rra_rrb(b);
	ft_printf("rrb\n");
}
