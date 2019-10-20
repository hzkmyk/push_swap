/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_characters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 10:42:22 by hmiyake           #+#    #+#             */
/*   Updated: 2018/08/01 14:58:44 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

wchar_t	*put_st(wchar_t *w)
{
	int i;

	i = 0;
	while (w[i] != '\0')
	{
		ft_putchar(w[i]);
		i++;
	}
	return (w);
}

char	*put_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (str);
}

int		put_space(int i)
{
	ft_putchar(' ');
	i++;
	return (i);
}

int		put_zero(int i)
{
	ft_putchar('0');
	i++;
	return (i);
}
