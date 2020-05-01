/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 14:40:00 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 17:47:55 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	multi_args(char *argv, t_stack *a)
{
	unsigned int	temp;

	temp = ft_atoi(argv);
	if (temp == 0 && ft_strcmp(argv, "0"))
		print_error();
	if (!is_dup(temp))
		push_backwords(a, (int)temp);
	else
		print_error();
}

void	get_args(int argc, char **argv, t_stack *a)
{
	int		i;
	char	**split;
	int		n;

	i = 1;
	while (i < argc)
	{
		split = ft_strsplit(argv[i], ' ', '\t');
		if (split)
		{
			n = -1;
			while (split[++n])
			{
				if (!is_int(split[n]))
					print_error();
				multi_args(split[n], a);
				free(split[n]);
			}
			free(split);
		}
		i++;
	}
}
