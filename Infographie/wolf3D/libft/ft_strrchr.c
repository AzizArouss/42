/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:19:07 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:55 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*copy;

	copy = (char *)s;
	i = ft_strlen(copy);
	while (i >= 0)
	{
		if (copy[i] == (char)c)
			return (copy + i);
		i--;
	}
	return (NULL);
}
