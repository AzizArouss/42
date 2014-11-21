/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:20:40 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/22 19:41:07 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s);

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		n;
	char	*s2cpy;
	char	*s1cpy;
	int		size;

	size = ft_strlen(s2);
	s2cpy = (char *) s2;
	s1cpy = (char *) s1;
	i = 0;
	n = 0;
	if (!*s2)
		return ((char *) s1);
	while (s1[i])
	{
		if (s1cpy[i] == s2cpy[n])
			n++;
		else
			n = 0;
		if (n == size)
			return (&s1cpy[i - n + 1]);
		i++;
	}
	return (NULL);
}
