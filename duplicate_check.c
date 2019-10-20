/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 19:54:23 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/28 22:12:46 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_dup(unsigned int num)
{
	static int	num_arr[4294967295];

	if (num_arr[num] == 0)
	{
		num_arr[num] = 1;
		return (0);
	}
	else
		return (1);
}
