/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:19:12 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:57 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_wcount(const char *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != c)
			{
				if (!s[i])
					return (j);
				i++;
			}
		}
		i++;
	}
	return (j);
}

static int	ft_lcount(const char *s, char c, int beg)
{
	int		i;

	i = 0;
	s += beg;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**ret;
	int		wc;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	wc = ft_wcount(s, c);
	ret = (char **)(malloc(sizeof(char *) * (wc + 1)));
	if (!ret)
		return (NULL);
	i = 0;
	j = 0;
	ret[wc] = 0;
	while (i < wc)
	{
		while (s[j] == c)
			j++;
		ret[i] = ft_strsub(s, j, ft_lcount(s, c, j));
		while (s[j] && s[j] != c)
			j++;
		i++;
	}
	return (ret);
}
