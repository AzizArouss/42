/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:19:16 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:58 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	while (i >= j)
	{
		if (ft_memcmp(s1, s2, j) == 0)
		{
			return ((char *)s1);
		}
		s1++;
		i--;
	}
	return (NULL);
}
