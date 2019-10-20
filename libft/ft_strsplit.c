/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiyake <hmiyake@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 23:15:06 by hmiyake           #+#    #+#             */
/*   Updated: 2019/08/30 16:36:02 by hmiyake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getnumofw(const char *s, char c, char d)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != d && (s[i + 1] == c ||
		s[i + 1] == d || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*mallocandcopy(const char *s, char c, char d)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] != '\0' && s[i] != c && s[i] != d)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (str)
	{
		while (s[i] != '\0' && s[i] != c && s[i] != d)
		{
			str[i] = s[i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

char		**ft_strsplit(char const *s, char c, char d)
{
	char	**array;
	int		i;
	int		now;

	i = 0;
	if (!s)
		return (0);
	now = getnumofw(s, c, d);
	array = (char **)malloc(sizeof(char *) * (now + 1));
	if (array)
	{
		while (i < now)
		{
			while (*s == c || *s == d)
				s++;
			if (*s != '\0')
				array[i] = mallocandcopy(s, c, d);
			while (*s != c && *s != d && *s != '\0')
				s++;
			i++;
		}
		array[i] = 0;
	}
	return (array);
}
