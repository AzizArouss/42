/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:15:47 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:29 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*copy;

	i = 0;
	copy = (char *)s;
	len = ft_strlen(copy);
	while (i <= len)
	{
		if (copy[i] == (char)c)
			return (copy + i);
		i++;
	}
	return (NULL);
}
