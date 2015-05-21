/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:19:04 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:54 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s2);
	while (i < n)
	{
		if (ft_memcmp(s1, s2, j) == 0 && j <= n - i)
			return ((char *)s1);
		if (s1[i] == '\0')
			return (NULL);
		s1++;
		i++;
	}
	return (NULL);
}
