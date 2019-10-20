/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 21:18:10 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/28 22:14:12 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_array(char **arr, int num)
{
	int i;

	i = 0;
	while (i < num)
	{
		free(arr[i]);
		i++;
	}
}
