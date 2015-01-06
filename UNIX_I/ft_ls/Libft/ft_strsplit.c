/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:22:49 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 16:24:51 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_words_len(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (*s != '\0' && *s != c)
	{
		s++;
		size++;
	}
	return (size);
}

size_t	ft_nbr_words(char const *s, char c)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i] != '\0' || s[i - 1] != c)
			nbr++;
	}
	return (nbr);
}

char	**ft_strsplit(char const *s, char c)
{
	char		**str;
	size_t		i;
	size_t		j;
	size_t		len;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_nbr_words(s, c);
	str = (char **)malloc(sizeof(char *) * len + 1);
	while (i < len)
	{
		j = 0;
		while (*s && *s == c)
			s = s + 1;
		while (*(s + j) && *(s + j) != c)
			j++;
		*(str++) = ft_strsub(s, 0, j);
		s = s + j;
		i++;
	}
	*str = NULL;
	return (str - len);
}
