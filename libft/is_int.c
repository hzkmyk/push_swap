/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 10:39:09 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 16:34:26 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_int(const char *str)
{
	int		i;
	int		neg;
	double	num;

	i = 0;
	neg = 0;
	num = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	neg = str[i] == '-' ? 1 : 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num = num + (str[i] - 48);
		i++;
	}
	if (str[i] != '\0' && (str[i] < '0' || str[i] > '9'))
		return (0);
	if (neg == 1)
		num = num * -1;
	if (num >= -2147483648 && num <= 2147483647)
		return (1);
	return (0);
}
