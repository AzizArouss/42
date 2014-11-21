/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:24:15 by gfernand          #+#    #+#             */
/*   Updated: 2014/01/02 20:40:50 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	calcword(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if ((s[i] != c && i == 0) || (s[i - 1] == c && s[i] != c))
			word++;
		i++;
	}
	return (word);
}

static char	**malloctab(char const *s, int c)
{
	int	numword;

	if (s)
	{
		numword = calcword(s, c);
		return ((char **) ft_memalloc(sizeof(char *) * (numword + 1)));
	}
	return (NULL);
}

static int	calcmalloc(char const *s, int i, int c)
{
	int	n;

	n = i;
	while (s[n] && s[n] != c)
		n++;
	return (n);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		n;
	int		j;

	if (s == NULL || (tab = malloctab(s, c)) == NULL)
		return (NULL);
	i = -1;
	n = 0;
	while (s[++i])
	{
		if (s[i] != c)
		{
			if (tab[n] == NULL)
			{
				j = 0;
				if ((tab[n] = ft_strnew(calcmalloc(s, i, c) + 2)) == NULL)
					return (NULL);
			}
			tab[n][j++] = s[i];
		}
		else if (tab[n] != NULL)
			n++;
	}
	return (tab);
}
