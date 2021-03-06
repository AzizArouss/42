/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:22:11 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 16:24:48 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t		s1;
	size_t		s2;
	size_t		i;

	s2 = ft_strlen(dst);
	s1 = ft_strlen(src);
	if (size < s2)
	{
		return (s1 + size);
	}
	i = 0;
	while (src[i] != '\0' && (s2 + i + 1) < size)
	{
		dst[s2 + i] = src[i];
		i++;
	}
	dst[s2 + i] = '\0';
	return (s2 + s1);
}
