/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 17:20:22 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/15 15:29:15 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Splits string s using c as separator in multiple strings stored in an array.
*/

#include "libft.h"
#include <stdlib.h>

static size_t	ft_strlenc(const char *str, char c)
{
	size_t		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static size_t	ft_countwords(const char *s, char c)
{
	size_t		nword;
	size_t		i;

	i = 0;
	nword = 1;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0' && s[i] != c)
			nword++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (nword);
}

static char		**ft_fill_tab(char **res, const char *s, char c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s[i] && j < ft_countwords(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			res[j] = ft_strsub(s, i, ft_strlenc((char *)(s + i), c));
			j++;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	res[j] = NULL;
	return (res);
}

char			**ft_strsplit(const char *s, char c)
{
	char		**res;

	if (!s)
		return (NULL);
	if (!(res = (char **)malloc(sizeof(char *) * ft_countwords(s, c) + 1)))
		return (NULL);
	res = ft_fill_tab(res, s, c);
	return (res);
}
