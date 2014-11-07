/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 18:14:29 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/07 19:06:58 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ptrd;
	const char	*ptrs;
	size_t		i;

	ptrd = (char *)dst;
	ptrs = (const char *s)src;
	i = 0;
	while (i < len)
	{
		ptrd[i] = ptrs[i];
		i++;
	}
	return (dst);
}
