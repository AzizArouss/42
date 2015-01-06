/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:22:30 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 16:24:50 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len_s2;

	len_s2 = ft_strlen(s2);
	if (!*s2)
		return ((char*)s1);
	while (*s1 && len_s2 <= n--)
	{
		if (!ft_memcmp(s1++, s2, len_s2))
			return ((char*)s1 - 1);
	}
	return (NULL);
}
