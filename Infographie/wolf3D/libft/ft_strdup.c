/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:16:03 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:37 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	int		i;
	char	*dst;
	int		len;

	i = 0;
	len = ft_strlen((char *)s1);
	dst = (char *)(malloc(len));
	if (dst)
	{
		while (((char *)s1)[i] != '\0')
		{
			dst[i] = ((char *)s1)[i];
			i++;
		}
		dst[i] = '\0';
	}
	else
		return (NULL);
	return (dst);
}
