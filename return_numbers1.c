/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_numbers1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 17:31:52 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 19:37:45 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	return_three(t_stack *a, t_stack *b)
{
	pa_print(a, b);
	pa_print(a, b);
	pa_print(a, b);
	sort_top_three(a);
}

void	return_five_or_less(t_stack *a, t_stack *b, int size)
{
	if (size == 3)
		return_three(a, b);
	else if (size == 4)
		return_four(a, b);
	else
		return_five(a, b);
}
